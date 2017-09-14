#include <stdio.h>

int main(void) {

    int i;
    int j;

    int arr1[3]; /* uninitialized contains garbage */
    for (i = 0; i < 3; ++i) {
        printf("arr1[%d]: %d\n", i, arr1[i]);
    }

    int arr2[3] = { 28, 3, 44 }; /* {} syntax only when declaring, not for assignment */
    for (i = 0; i < 3; ++i) {
        printf("arr2[%d]: %d\n", i, arr2[i]);
    }

    int arr3[] = { 42, 9, 2112 };
    for (i = 0; i < 3; ++i) {
        printf("arr3[%d]: %d\n", i, arr3[i]);
    }

    int arr4[3] = { 5150 }; /* rest initialized to 0 */
    for (i = 0; i < 3; ++i) {
        printf("arr4[%d]: %d\n", i, arr4[i]);
    }

    int arr5[3] = { 1, 2, 3, 4 }; /* WARNING */
    for (i = 0; i < 3; ++i) {
        printf("arr5[%d]: %d\n", i, arr5[i]);
    }

    int arr6[3];
    /* explicit init */
    for (i = 0; i < 3; ++i) {
        arr6[i] = i * 2;
    }
    for (i = 0; i < 3; ++i) {
        printf("arr6[%d]: %d\n", i, arr6[i]);
    }

    /* int arr7[2][3] = { {1, 2, 3}, {4, 5, 6} }; */
    /* int arr7[2][3] = { 1, 2, 3, 4, 5, 6 }; WARNING with -Wall */
    /* all dimensions except for leftmost MUST be specified */
    int arr7[][3] = { {1, 2, 3}, {4, 5, 6} };
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("arr7[%d][%d]: %d\n", i, j, arr7[i][j]);
        }
    }

}
