#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
     * void * means pointer to anything
     */

    /*
     * local variables, function args, return values are stored on the stack
     * each function gens a new stack frame
     * deallocation is automatic
     *
     * memory allocated with malloc() or calloc() uses the **heap** and
     * must be explicitly freed using free() or else MEMORY LEAK
     */

    /* malloc does not init */
    int *arr;
    arr = (int *) malloc(5 * sizeof(int)); /* arr has address of 5 int array */
    printf("%p\n", arr);
    for (int i=0; i < 5; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }
    free(arr);

    /* calloc sets allocated memory to zeros */
    int *arr2;
    arr2 = (int *) calloc(5, sizeof(int));
    /* ALWAYS CHECK FOR NULL, same for malloc above */
    if (arr2 == NULL) {
        fprintf(stderr, "memory allocation failed!");
        exit(1);
    }
    for (int i=0; i < 5; i++) {
        printf("arr2[%d]: %d\n", i, arr2[i]);
    }
    free(arr2);

}
