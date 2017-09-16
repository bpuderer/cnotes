#include <stdio.h>
#include <string.h>

int string_length(char*);
void reverse(char*);

int main(void) {

    /* no string type in C */

    char name[5];
    char name2[] = "Michael";
    char name3[10];
    char name4[20] = "John ";
    char name5[] = "Graham";
    char name6[] = "Terry";

    name[0] = 'E';
    name[1] = 'r';
    name[2] = 'i';
    name[3] = 'c';
    name[4] = '\0';

    strcpy(name3, "Terry");
    strcat(name4, name5);

    printf("\"%s\" has length %zd\n", name3, strlen(name3));
    printf("%s %s %s %s %s\n", name, name2, name3, name4, name6);
    printf("strcmp(\"%s\", \"%s\") : %d\n", name3, name6, strcmp(name3, name6));
    printf("strcmp(\"%s\", \"%s\") : %d\n", name, name3, strcmp(name, name3));

    printf("\"%s\" has length %d\n", name6, string_length(name6));

    printf("%s reversed : ", name);
    reverse(name);
    printf("%s\n", name);
}

int string_length(char *str) {
    /* useless, obviously */
    int count;
    for (count=0; str[count] != '\0'; ++count);
    return count;
}

void reverse(char *str) {
    if (str) {
        char *end = str + strlen(str) - 1;
        while (str < end) {
            char tmp = *str;
            *str++ = *end;
            *end-- = tmp;
        }
    }
}
