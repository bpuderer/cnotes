#include <stdio.h>

int main() {

    /*
     * printf, scanf, fprintf, fscanf,
     */

    fprintf(stderr, "something went wrong!\n");

    char s[10];
    int result;
    printf("enter something, I'll store 10 chars: ");
    result = scanf("%10s", s); /* don't need & for reading strings */
    printf("scanf result: %d\n", result);
    printf("I saved %s\n", s);
}
