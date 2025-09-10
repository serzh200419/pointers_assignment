#include <stdio.h>

int main(void) {
    int x = 42;
    int *p = &x;

    printf("Address of x:    %p\n", (void*)&x);
    printf("Address of x using pointer: %p\n", (void*)p);

    printf("Value of x before changing using p: %d\n", *p);
    *p = 100; 
    printf("Value of x after changing using p: %d\n", x);

    return 0;
}

