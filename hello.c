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

    int x;
    int y;
    int z;

    printf("hello, world!\n");

    /*
     * operators: + - * / %
     * assignment: = += -= *= /=
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

    return 0;
}
