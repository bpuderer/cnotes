#include <assert.h>
#include <stdio.h>

int main() {

    int arr[] = { 1, 2, 3, 4, 5 };
    int *p = arr;

    printf("%p %d\n", p, *p);
    p += 1;    /* p = p + sizeof(int) */
    printf("%p %d\n", p, *p);
    p += 2;
    printf("%p %d\n", p, *p);

    printf("size of integer: %d\n", sizeof(int));
    printf("size of (int *): %d\n", sizeof(int *));


    /* arrays are syntatic sugar for pointers */
    assert(arr == &arr[0]);
    printf("arr[2] = %d\n", arr[2]);
    printf("arr[2] = %d\n", *(arr + 2));


    for (int i=0; i < 5; i++) {
        printf("arr[%d]: %d\n", i, *(arr + i));
    }

    printf("---\n");

    /* incrementing pointer is usually cheaper than pointer addition */
    p = arr;
    for (int i=0; i < 5; i++) {
        printf("arr[%d]: %d\n", i, *p);
        p++;
    }

}
