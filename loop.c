#include <stdio.h>

int main() {

    int a = 3;
    int x;
    int y = 3;
    int z;

    while (a > 0) {
        printf("a=%d\n", a);
        a--;
    }

    for (int i = 0; i < 5; i++) {
        printf("hey\n");
    }

    for (int i = 0; i < 10; i++) {
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

    do {
        printf("y=%d\n", y);
        y--;
    }
    while (y > 0);

    /* goto exists
     * goto <label>;
     * <label>:
     */
}
