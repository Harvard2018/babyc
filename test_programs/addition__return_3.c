# Assemble the file. We explicitly assemble as 32-bit
# to avoid confusion on x86_64 machines.
$ as out.s -o out.o --32
 
# Link the file, again specifying 32-bit.
$ ld -m elf_i386 -s -o out out.o
 
# Run it!
$ ./out
