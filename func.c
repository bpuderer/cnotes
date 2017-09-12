#include <stdio.h>
#include <stdarg.h>

/* function prototypes */
void say_hello(void);
void print_int(int x);
int foo(int x);
int bar(int x);
int add_numbers(int num, ...); /* variadic function */

int main() {

    int i;

    say_hello();
    i = foo(50);
    print_int(i);

    printf("sum: %d\n", add_numbers(4, 10, -2, 4, -3));
}

void say_hello(void) {
    printf("hello\n");
}

void print_int(int x) {
    printf("%d\n", x);
}

int foo(int x) {
    return 2 * bar(x);
}

int bar(int x) {
    return 3 * x;
}

int add_numbers(int num, ...) {
    /* number of optional params needed to know how many times to call va_arg */
    int counter, total = 0;
    va_list params;

    va_start(params, num);

    for (counter = 0; counter < num; counter++) {
        total += va_arg(params, int);
    }

    va_end(params);

    return total;
}
