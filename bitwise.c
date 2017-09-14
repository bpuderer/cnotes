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


    /* Example from Steve Oualline's Practical C Programming 3e
     * Bit 0 = ERROR
     * Bit 1 = FRAMING_ERROR
     * Bit 2 = PARITY_ERROR
    */
    char flags = 0; /* char can be used to store up to 8 status bits */
    const int ERROR = (1<<0); /* 0x01 */
    const int FRAMING_ERROR = (1<<1); /* 0x02 */
    const int PARITY_ERROR = (1<<2); /* 0x04 */

    /* To SET a bit, use | */
    flags |= FRAMING_ERROR;

    /* To TEST a bit, use & */
    if (flags & ERROR)
        printf("ERROR bit set\n");

    if (flags & FRAMING_ERROR)
        printf("FRAMING_ERROR bit set\n");

    /* To CLEAR a bit, use &= and ~ (NOT) */
    flags &= ~FRAMING_ERROR;

    if (flags & FRAMING_ERROR)
        printf("FRAMING_ERROR bit set\n");

}
