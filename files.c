#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char line[80];
    FILE *in_file;

    in_file = fopen("./README.md", "r");
    if (in_file == NULL) {
        fprintf(stderr, "failure opening file!\n");
        exit(2);
    }
    while (fgets(line, sizeof(line), in_file) != NULL) {
        printf("%s\n", line);
    }
    fclose(in_file);

}
