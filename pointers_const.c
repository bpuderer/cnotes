#include <stdio.h>

int main(void) {

    int x = 9;
    int y = 10;

    const int *ptr_x = &x; /* int is const */
    /* int const *ptr_a;  same thing */

    int *const ptr_y = &y; /* pointer is constant */

    printf("*ptr_x: %d\n", *ptr_x);
    printf("*ptr_y: %d\n", *ptr_y);

    /*    *ptr_x = 6;    INVALID    */
    /*    ptr_y = ptr_x; INVALID    */

    *ptr_y = 13;
    ptr_x = ptr_y;

    printf("*ptr_x: %d\n", *ptr_x);
    printf("*ptr_y: %d\n", *ptr_y);
}
