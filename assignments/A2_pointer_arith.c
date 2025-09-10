#include <stdio.h>

int main(void) {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;

    printf("Traversing using pointer:\n");
    for (int i = 0; i < 5; ++i) {
        printf("*(p + %d) = %d (address %p)\n", i, *(p + i), (void*)(p + i));
    }

    // Modifing values
    for (int i = 0; i < 5; ++i) {
        *(p + i) = *(p + i) * 2;
    }

    printf("\nModified array:\n");
    for (int i = 0; i < 5; ++i) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

