#include <stdio.h>

// void changeValue(int* address)
// {
//     *address = 345;
// }
// int main()
// {
//     int a = 34, b = 56;
//     printf("The value of a now is %d\n",a);
//     changeValue(&a);
//     printf("The value of a now is %d\n",a);

//     return 0;
// }

void changevalue(int* a, int* b)
{
    *a = 7, *b = 1;
}

int main()
{
    int a = 4, b= 3;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    changevalue(&a, &b);
    printf("The value of a now is %d\n",a);
    printf("The value of b now is %d\n",b);

    return 0;
}
