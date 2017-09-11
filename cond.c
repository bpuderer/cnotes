#include <stdio.h>

int main() {

    int i = 10;
    if (i < 0) {
        printf("i is negative\n");
    } else if (i > 10) {
        printf("i greater than 10\n");
    } else {
        printf("i in range [0, 10]\n");
    }

    if (1) {
        printf("always\n");
    }

    /* ternary */
    int a = 10;
    int b = 20;
    int result;
    result = a < b ? 1 : 2;
    printf("result: %d\n", result);

    /* Elvis operator
     * x = f() ?: g()
     * x = f() ? f() : g()
     * same logic but f() not evaluated twice
     */

    char grade = 'C';
    switch(grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
        case 'C':
            printf("Good job\n");
            break;
        case 'D':
            printf("well, you passed\n");
            break;
        case 'F':
            printf("failure\n");
            break;
        default:
            printf("unknown grade value\n");
    }

}

