var i8  = 3:int(8);
var i16 = 3:int(16);
var i32 = 3:int(32);
var i64 = 3:int(64);
var i   = 3:int;
var u8  = 3:uint(8);
var u16 = 3:uint(16);
var u32 = 3:uint(32);
var u64 = 3:uint(64);
var u   = 3:uint;

writeln((i8.. # u).type:string);
writeln((i8.. # u64).type:string);
writeln((i16.. # u).type:string);
writeln((i16.. # u64).type:string);
writeln((i32.. # u).type:string);
writeln((i32.. # u64).type:string);
writeln((u8.. # u).type:string);
writeln((u8.. # u64).type:string);
writeln((u16.. # u64).type:string);
writeln((u16.. # u).type:string);
writeln((u32.. # u64).type:string);
writeln((u32.. # u).type:string);