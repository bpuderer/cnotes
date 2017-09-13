/* preprocessor directive
 * includes declaration of printf
 * linker adds implementation
 */
#include <stdio.h>

int main() {
    /*
     * gcc hello.c -o hello
     * compiler and linker
     */

    /* variable names must start with _ or letter and contain _, letters, or digits */
    int x;
    int y;
    int z;

    printf("hello, world!\n");

    /*
     * operators: + - * / %
     * assignment: = += -= *= /= %= <<= >>= &= ^= |=
     * increment, decrement: i++ ++i i-- --i
     * unary minus: -
     * comparison: < <= > >= == !=
     * logical: ! && ||
     */

    /* prefix and postfix */
    x = 10;
    y = ++x;
    z = x++;
    printf("x=%d y=%d z=%d\n", x, y, z);

    /* division operator - int vs float */
    printf("%d %f %f %f\n", 11/10, 11.0/10, 11/10.0, 11.0/10.0);

    return 0;
}
