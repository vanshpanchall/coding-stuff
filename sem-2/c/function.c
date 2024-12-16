#include <stdio.h>
#include <conio.h>
int sqr(int val); // function prototype
void main()
{
    int number;
    int cube(int);

    printf("Enter numbers: ");
    scanf("%d", &number);
    printf("sum = %d\n", sqr(number)); // function call

    printf("sum = %d\n", cube(number));
    getch();
}
int sqr(int val) // function definition
{
    return val * val; // return statement
}
int cube(int val) // function definition
{
    return val * val * val; // return statement
}