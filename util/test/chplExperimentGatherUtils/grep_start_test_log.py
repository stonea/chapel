#!/usr/bin/env python3

import sys, os
from subprocess import PIPE, run, Popen

def generateJunitXml(logFile):
  logFile = os.path.abspath(logFile)
  chplHome = os.getenv("CHPL_HOME")
  oldDir = os.getcwd()
  os.chdir(f"{chplHome}/util/test/")
  try:
    os.system(f"./convert_start_test_log_to_junit_xml.py -l {logFile} -o {logFile}.xml")
  finally:
    os.chdir(oldDir)

def processXml(logFile):
  erroringTests = []
  errorCauses = {}
  testContent = {}

  import xml.etree.ElementTree as ET
  tree = ET.parse(logFile + '.xml')
  root = tree.getroot()

  for testCase in root:
    errors = testCase.findall('error')
    content = testCase.find('system-out').text
    if len(errors) != 0:
      testPath = testCase.attrib['classname'] + '/' + testCase.attrib['name']
      erroringTests.append(testPath)
      errorCauses[testPath] = []
      for err in errors:
        errorCauses[testPath].extend(err.text.split("\n"))
      testContent[testPath] = content

  return (erroringTests, errorCauses, testContent)


if len(sys.argv) != 3:
  print("Invalid number of arguments passed to " + sys.argv[0])
  print("Usage: " + sys.argv[0] + " regexp logFile")
  sys.exit(1)
regexp = sys.argv[1]
logFile = sys.argv[2]

generateJunitXml(logFile)
(erroringTests, errorCauses, testContent) = processXml(logFile)

for test in erroringTests:
  content = testContent[test]

  txt = "TIMERS"
  grepProc = Popen(["grep", regexp, "-i"], stdin=PIPE, stdout=PIPE)
  grepResult = grepProc.communicate(input=bytes(content, 'utf-8'))[0].decode('utf-8')
  for line in grepResult.splitlines():
    print(f"[{test}]{line}")
