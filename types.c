#include <stdio.h>

int main(void) {

    /* https://en.wikipedia.org/wiki/C_data_types */
    /* https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html#Primitive-Types */

    /* length(char) < length(short) <= length(int) <= length(long) */
    signed char sc;
    unsigned char uc;
    char c;
    short int si; /* short, signed short int, signed short */
    unsigned short int usi; /* unsigned short */
    int i = 10; /* signed int, signed */
    unsigned int ui; /* unsigned */
    long int li; /* long, signed long int, signed long */
    unsigned long int uli; /* unsigned long */
    long long int lli; /* long long, signed long long int, signed long long */
    unsigned long long int ulli; /* unsigned long long */

    float f = (float) i; /* type cast */
    double d;
    long double ld;

    /* complex type introduced in C99 */

    char some_string[9] = "woo hoo!";
    char same_string[] = "woo hoo!";
    /* structs pointers */

    const int CONSTANT_VALUE = 100;

    /*
    enum level_type { TRACE, DEBUG, INFO, WARN, ERROR, FATAL };
    enum level_type level = INFO;
    */

    typedef enum { TRACE, DEBUG, INFO, WARN, ERROR, FATAL } level_type;
    level_type level = INFO;

    printf("level: %d\n", level);

    printf("f=%f\n", f);
}
