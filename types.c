#include <stdio.h>

int main() {

    /* https://en.wikipedia.org/wiki/C_data_types */
    int i = 10;
    long l;
    short s;
    char c;
    double d;
    float f = (float) i;    /* explicit conversion */
    char some_string[9] = "woo hoo!";
    char same_string[] = "woo hoo!";
    /* structs pointers */

    printf("f=%f\n", f);
}
