#include <stdio.h>

int main(void) {

    /*
     * https://stackoverflow.com/questions/692564/
     * void pointers can point to any data type, cannot be dereferenced directly
     */
    int i = 5;
    float f = 3.14;
    void * p;

    /* int *pi = &i;
    pi = &f; INVALID */

    p = &i;
    p = &f;
    /* printf("*p = %f\n", *p); INVALID */
    /* have to cast before dereferencing */
    printf("*p = %f\n", *(float *)p);
}
