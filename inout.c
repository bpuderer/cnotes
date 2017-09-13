#include <stdio.h>
#include <string.h>

int main() {

    /*
     * printf, scanf, fprintf, fscanf,
     */
    char name[100];
    char line[5];
    int num;

    fprintf(stderr, "something went wrong!\n");

    /*
    char s[10];
    int result;
    printf("enter something, I'll store 10 chars: ");
    result = scanf("%10s", s); /* don't need & for reading strings
    printf("scanf result: %d\n", result);
    printf("I saved %s\n", s);
    */

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0'; /* remove \n read by fgets */
    printf("You entered: %s\n", name);

    printf("Enter a number: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &num); /* string scanf */
    printf("You entered: %d\n", num);
}
