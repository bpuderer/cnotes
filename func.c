#include <stdio.h>

/* function prototypes */
void say_hello(void);
void print_int(int x);
int foo(int x);
int bar(int x);

int main() {

    int i;

    say_hello();
    i = foo(50);
    print_int(i);
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
