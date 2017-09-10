#include <stdio.h>

int factorial(int n);

int main() {
    printf("%d! = %d\n", 4, factorial(4));
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
