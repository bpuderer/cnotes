#include <assert.h>
#include <stdio.h>

int main(void) {

    int i = 5;
    int *j = &i; /* pointer variable */
    int **k = &j; /* pointer to a pointer */

    printf("address : contents of address : deref : deref x 2\n");

    /* &i address of i */
    printf("i %p : %d\n", &i, i);

    /*
     *  j holds the address of i
     *  * dereferences a pointer, gets the contents at the address
     */
    printf("j %p : %p : %d\n", &j, j, *j);

    printf("k %p : %p : %p : %d\n", &k, k, *k, **k);
    assert(*k == j);
}
