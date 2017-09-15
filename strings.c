#include <stdio.h>
#include <string.h>

int main(void) {

    /* no string type in C */

    char name[5];
    char name2[] = "Michael";
    char name3[10];
    char name4[] = "John ";
    char name5[] = "Graham";
    char name6[] = "Terry";

    name[0] = 'E';
    name[1] = 'r';
    name[2] = 'i';
    name[3] = 'c';
    name[4] = '\0';

    strcpy(name3, "Terry");

    printf("\"%s\" has length %zd\n", name3, strlen(name3));
    printf("%s %s %s %s %s\n", name, name2, name3, strcat(name4, name5), name6);
    printf("strcmp(\"%s\", \"%s\") : %d\n", name3, name6, strcmp(name3, name6));
    printf("strcmp(\"%s\", \"%s\") : %d\n", name, name3, strcmp(name, name3));
}
