#include <stdio.h>

void foo(int *i); /* i is a pointer */

int main(void) {

    int num = 9;
    foo(&num);
    printf("num: %d\n", num); /* 10 */

}

void foo(int *i) {
    (*i)++; /* ++ higher precedence than * so MUST use parens */
}
