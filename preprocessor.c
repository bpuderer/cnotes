/* # MUST be in column 1 for preprocessor */
#include <stdio.h>

#define SIZE 5 /* const preferred over #define */
#define SQR(x) ((x) * (x)) /* ALWAYS use () around params */
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))

/* #define DEBUG */

int data[SIZE] = { 9, -42, 3, -7, 13 };

int main() {

    int i;
    for (i=0; i < SIZE; i++) {
        printf("data[%d] : %d, squared : %d\n", i, data[i], SQR(data[i]));
    }

    printf("max of %d and %d : %d\n", data[1], data[2], MAX(data[1], data[2]));
    printf("min of %d and %d : %d\n", data[1], data[2], MIN(data[1], data[2]));

#ifdef DEBUG /* also #ifndef for not defined */
    printf("in debug mode...\n");
#else
    printf("in prod mode...\n");
#endif

}
