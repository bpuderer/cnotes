/* Example from Steve Oualline's Practical C Programming 3e
 * Bit 0 = ERROR
 * Bit 1 = FRAMING_ERROR
 * Bit 2 = PARITY_ERROR
*/

#include <stdio.h>

void check_errors(int);

const int ERROR = (1<<0);         /* 0x01, 00000001 */
const int FRAMING_ERROR = (1<<1); /* 0x02, 00000010 */
const int PARITY_ERROR = (1<<2);  /* 0x04, 00000100 */

int main(void) {

    unsigned int a = 11; /* 1011 */
    unsigned int b = 5;  /* 0101 */

    printf("%d & %d = %d\n", a, b, a & b);
    printf("%d | %d = %d\n", a, b, a | b);
    printf("%d ^ %d = %d\n", a, b, a ^ b);
    printf("~%d = %d\n", b, ~b);

    printf("%d << 2 = %d\n", b, b << 2); /* 101 -> 10100 */
    printf("%d >> 2 = %d\n", a, a >> 2);


    char flags = 0; /* char can be used to store up to 8 status bits */

    /* To SET a bit, use | */
    flags |= ERROR;         /* 00000001, |0 keeps at current value, |1 = 1 */
    flags |= FRAMING_ERROR; /* 00000010                                    */

    check_errors(flags);

    printf("clearing ERROR and FRAMING_ERROR\n");

    /* To CLEAR a bit, use &= and ~ (NOT) */
    flags &= ~ERROR;         /* 11111110, &1 keeps at current value, &0 = 0  */
    flags &= ~FRAMING_ERROR; /* 11111101                                     */

    check_errors(flags);
}

void check_errors(int f) {
    printf("Checking for errors...\n");
    if (f & ERROR)
        printf("ERROR\n");
    if (f & FRAMING_ERROR)
        printf("FRAMING_ERROR\n");
    if (f & PARITY_ERROR)
        printf("PARITY_ERROR\n");
}
