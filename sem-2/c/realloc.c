#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int *ptr, size, i;
    // create memory for 3
    size = 3;
    ptr = malloc(size * sizeof(int));
    // *(ptr + i) === ptr[i]
    *(ptr + 0) = 1;
    *(ptr + 1) = 2;
    *(ptr + 2) = 3;
    // printing elements
    printf("Old memory allocation:\n");
    for (i = 0; i < size; i++)
        printf("%d\n", ptr[i]);
    // Let's change the size to store 7 more integers
    size = 10;
    ptr = realloc(ptr, size * sizeof(int));
    *(ptr + 3) = 4;
    *(ptr + 4) = 5;
    *(ptr + 5) = 6;
    *(ptr + 6) = 7;
    *(ptr + 7) = 8;
    *(ptr + 8) = 9;
    *(ptr + 9) = 10;
    printf("New allocated memory:\n");
    for (i = 0; i < size; i++)
        printf("%d\n", ptr[i]);
    return 0;
}