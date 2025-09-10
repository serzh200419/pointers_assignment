#include <stdio.h>

int main(void) {
    int x = 50;
    int *p = &x;       
    int **pp = &p;    

    printf("Value of x using p:  %d\n", *p);
    printf("Value of x using pp: %d\n", **pp);

    printf("Address of x: %p\n", (void*)&x);
    printf("Address stored in p: %p\n", (void*)p);
    printf("Address stored in pp: %p\n", (void*)pp);

    return 0;
}

