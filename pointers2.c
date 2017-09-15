#include <stdio.h>

int main(void) {

    int i = 10;
    int *j = &i;
    int *k;

    printf("i = %d\n", i);
    *j = 20;
    printf("i = %d\n", i);

    k = j;
    printf("j %p %p %d\n", &j, j, *j);
    printf("k %p %p %d\n", &k, k, *k);

    *j = *k + i; /* store operation */
    printf("i = %d\n", i);

}
