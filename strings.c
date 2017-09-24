#include <stdio.h>
#include <string.h>

void reverse(char*);
int stringLength(char*);
int simpleAtoi(char*);

int main(void) {

    /* no string type in C */

    char name[5];
    char name2[] = "Michael";
    char name3[10];
    char name4[20] = "John ";
    char name5[] = "Graham";
    char name6[] = "Terry";
    char num[] = "123";

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

    printf("\"%s\" has length %d\n", name6, stringLength(name6));

    printf("%s reversed : ", name);
    reverse(name);
    printf("%s\n", name);

    printf("%s as int: %d\n", num, simpleAtoi(num));
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

int stringLength(char *str) {
    /* demo */
    int count;
    for (count = 0; str[count] != '\0'; ++count);
    return count;
}

int simpleAtoi(char *str) {
    /* simple version w/o handling for prepended whitespace,
     * +/- sign or misc chars after integral number */
    int i;
    int sum = 0;

    for (i = 0; str[i] != '\0'; ++i)
        sum = 10*sum + str[i] - '0';

    return sum;
}
