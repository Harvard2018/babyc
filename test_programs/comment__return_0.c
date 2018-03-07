1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
# Here's the file we want to compile.
$ cat return_two.c
#include <stdio.h>
 
int main() {
    return 2;
}
 
# Run the compiler with this file.
$ ./babyc return_two.c
Written out.s.
 
# Check the output looks sensible.
$ cat out.s
.text
    .global _start
 
_start:
    movl    $2, %ebx
    movl    $1, %eax
    int     $0x80
