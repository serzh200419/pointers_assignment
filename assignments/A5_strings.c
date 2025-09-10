#include <stdio.h>

int main(void) {
    char str[] = "Hello";
    char *p = str; 

    printf("Printing string using pointer:\n");
    while (*p != '\0') {
        putchar(*p);
        p++;
    }
    printf("\n");

    // Counting characters using pointer
    int length = 0;
    char *q = str;
    while (*q != '\0') {
        length++;
        q++;
    }

    printf("Length of string: %d\n", length);

    return 0;
}

