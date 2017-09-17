#include <stdio.h>

void foo(int*);
void swap(int*, int*);

int main(void) {

    int x = 28;
    int y = 3;
    int num = 9;

    foo(&num);
    printf("num: %d\n", num); /* 10 */

    printf("x: %d    y: %d\n", x, y);
    swap(&x, &y);
    printf("x: %d     y: %d\n", x, y);
}

void foo(int *i) {
    (*i)++; /* ++ higher precedence than * so MUST use parens */
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
