#include <stdio.h>
#include <stdlib.h>

int main(void) {

    /*
     * https://sourceware.org/gdb/current/onlinedocs/gdb/
     *
     * gcc -g gdb_basics.c -o gdb_basics
     * gdb gdb_basics
     *
     * (gdb) run <prog's command line args>
     * where                - see stack trace
     * break <file>: <line> - set breakpoint
     * continue             - resume execution
     * next                 - execute next line
     * step                 - next line and steps in
     * print <variable>
     * display <variable>   - prints variable whenever execution stops
     * print *arr2@5        - print dynamically allocated array
     * quit
     *
     * p, c, n, s           - print, continue, next, step shortcuts
     *
     */
    int i;
    int x;
    int arr[3] = { 28, 3, 44 };
    for (i = 0; i < 3; ++i) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }


    int *arr2;
    arr2 = (int *) calloc(5, sizeof(int));
    if (arr2 == NULL) {
        fprintf(stderr, "memory allocation failed!");
        exit(1);
    }
    for (i = 0; i < 5; ++i) {
        printf("arr2[%d]: %d\n", i, arr2[i]);
    }
    free(arr2);


    x = 9;

    /* free(arr); /* trying to free non-heap object -> core dump */

    ++x;
    x = 13;

    /*
        (gdb) break gdb_basics.c:29
        Breakpoint 1 at 0x40072b: file gdb_basics.c, line 29.
        (gdb) break gdb_basics.c:42
        Breakpoint 2 at 0x4007d1: file gdb_basics.c, line 42.
        (gdb) run
        Starting program: /home/ben/bengit/cnotes/gdb_basics

        Breakpoint 1, main () at gdb_basics.c:29
        29          printf("arr[%d]: %d\n", i, arr[i]);
        (gdb) print arr
        $1 = {28, 3, 44}
        (gdb) continue
        Continuing.
        arr[0]: 28

        Breakpoint 1, main () at gdb_basics.c:29
        29          printf("arr[%d]: %d\n", i, arr[i]);
        (gdb) continue
        Continuing.
        arr[1]: 3

        Breakpoint 1, main () at gdb_basics.c:29
        29          printf("arr[%d]: %d\n", i, arr[i]);
        (gdb) continue
        Continuing.
        arr[2]: 44
        arr2[0]: 0
        arr2[1]: 0
        arr2[2]: 0
        arr2[3]: 0
        arr2[4]: 0

        Breakpoint 2, main () at gdb_basics.c:42
        42      free(arr2);
        (gdb) print arr2
        $2 = (int *) 0x602420
        (gdb) print *arr2@5
        $3 = {0, 0, 0, 0, 0}
        (gdb) next
        46      i = 9;
        (gdb) display i
        1: i = 0
        (gdb) next
        50      i++;
        1: i = 9
        (gdb) next
        51      i = 13;
        1: i = 10
        (gdb) continue
        Continuing.
        [Inferior 1 (process 15356) exited normally]

     */
}
