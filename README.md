# Quines collection
Just some quines written on several programming languages.

Currently following quines are written:
- asm (linux)
  Quine written on assembly
  ```bash
  as asm.s -o asm.o
  ld asm.o -e main -o asm.bin
  ./asm.bin
  ```
- perl-lua
  lua2perl.lua & perl2lua.pl - chain quine written on perl and lua
