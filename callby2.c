#include <stdio.h>

void foo(int *i); /* i is a pointer */

int main() {

    int num = 9;
    foo(&num);
    printf("num: %d\n", num); /* 10 */

}

void foo(int *i) {
    (*i)++; /* ++ higer precedence than * so MUST use parens */
}
