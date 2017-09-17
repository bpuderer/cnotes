#include <stdio.h>

int factorial(int);

int main(void) {

    int a = 3;
    int i;
    int x;
    int y = 3;

    while (a > 0) {
        printf("a=%d\n", a);
        a--;
    }

    for (i = 0; i < 5; ++i) {
        printf("hey\n");
    }

    for (i = 0; i < 10; ++i) {
        if (i % 2 == 0)
            continue;
        printf("i = %d\n", i);
    }

    /* infinite loop with break
     * can also use for (;;)
     */
    while (1) {
        printf("Enter an int. Neg breaks loop: ");
        scanf("%d", &x);
        printf("you entered %d\n", x);
        if (x <= 0)
            break;    /* exits nearest enclosing loop */
    }

    /* while with break more common than do-while */
    do {
        printf("y=%d\n", y);
        y--;
    }
    while (y > 0);

    /* goto exists
     * goto <label>;
     * <label>:
     */

     printf("%d! = %d\n", 4, factorial(4));
}

int factorial(int n) {
    int i, j;
    for (i = 1, j = 1; i <= n; j *= i, ++i)
        continue;
    return j;
}
