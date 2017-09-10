#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    printf("number of arguments: %d\n", argc);

    for (int i=1; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
        if (strcmp(argv[i], "-b") == 0) {
            printf("-b option included\n");
        }
    }

}
