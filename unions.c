#include <stdio.h>

int main() {

    /* union contains only one value, all occupy same space */
    union val {
        int i;
        float f;
    } data;

    data.i = 1;
    data.f = 3.0; /* data.i value clobbered, accessing it is invalid */
    printf("data.f : %f\n", data.f);
}
