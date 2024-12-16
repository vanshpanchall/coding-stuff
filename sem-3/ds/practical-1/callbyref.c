#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int a, b;
    printf("Enter two Integers A and B: ");
    scanf("%d%d", &a, &b);
    printf("After Swapping A=%d, B=%d", a, b);
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = b;
    *b = a;
    *a = temp;
};