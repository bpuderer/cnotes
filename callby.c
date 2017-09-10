#include <stdio.h>

/* call-by-VALUE language */

void foo(int i);
void bar(int arr[]);

int main() {

    int i = 9;
    foo(i);
    printf("i: %d\n", i); /* 9 */

    int my_arr[3] = { 0, 0, 0 };
    bar(my_arr); /* my_arr changed by bar */
    for (int i=0; i < 3; i++) {
        printf("my_arr[%d]: %d\n", i, my_arr[i]);
    }
}

void foo(int i) {
    i = 42;
}

/* rules for specifying dimensions same as when initializing, see arrays.c */
void bar(int arr[]) {
    arr[0] = 28;
}
