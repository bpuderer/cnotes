/*
 * https://stackoverflow.com/a/840504 Yuval Adam
 */

#include <stdio.h>

int add_ints(int, int);
int add2to3(int (*func_ptr)(int, int));
int (*func_factory(int))(int, int);

int main(void) {

    int (*func_ptr)(int, int);
    int (*func_ptr2)(int, int);

    func_ptr = add_ints;
    /* func_ptr = &add_ints;    same thing */
    printf("%d\n", (*func_ptr)(1, 2));
    printf("%d\n", add2to3(func_ptr));


    func_ptr2 = func_factory(9);
    printf("%d\n", (*func_ptr)(10, 11));
}

int add_ints(int x, int y) {
    return x + y;
}

int add2to3(int (*func_ptr)(int, int)) {
    return (*func_ptr)(2, 3);
};

int (*func_factory(int n))(int, int) {
    printf("Got param %d\n", n);
    int (*func_ptr)(int, int) = add_ints;
    return func_ptr;
}
