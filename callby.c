#include <stdio.h>

/* call-by-VALUE language */

void foo(int x);
void bar(int arr[]);

int main(void) {

    int i;
    int x = 9;

    foo(x);
    printf("x: %d\n", x); /* 9 */

    int my_arr[3] = { 0, 0, 0 };
    bar(my_arr); /* my_arr changed by bar */
    for (i = 0; i < 3; ++i) {
        printf("my_arr[%d]: %d\n", i, my_arr[i]);
    }
}

void foo(int x) {
    x = 42;
}

/* rules for specifying dimensions same as when initializing, see arrays.c */
void bar(int arr[]) {
    arr[0] = 28;
}
