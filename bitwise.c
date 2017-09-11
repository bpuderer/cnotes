#include <stdio.h>

int main() {

    unsigned int a = 11; /* 1011 */
    unsigned int b = 5;  /* 0101 */

    printf("%d & %d = %d\n", a, b, a & b);
    printf("%d | %d = %d\n", a, b, a | b);
    printf("%d ^ %d = %d\n", a, b, a ^ b);
    printf("~%d = %d\n", b, ~b);

    printf("%d << 2 = %d\n", b, b << 2); /* 101 -> 10100 */
    printf("%d >> 2 = %d\n", a, a >> 2);
}
