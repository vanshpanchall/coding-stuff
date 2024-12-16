#include <stdio.h>
void swap(int, int);
int main()
{
    int a, b;
    printf("Enter two Integers A and B: ");
    scanf("%d%d", &a, &b);
    printf("Before Swapping A=%d, B=%d", a, b);
    swap(&a, &b);
    printf("\nAfter Swapping A=%d, B=%d", b, a);
    return 0;
};
void swap(int a, int b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;
};