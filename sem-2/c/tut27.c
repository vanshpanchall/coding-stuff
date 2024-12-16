#include <stdio.h>
int main()
{
    // char a = '3';
    // char *ptra = &a;
    // printf("%d\n", ptra-2);
    // ptra--;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra-2);
    int arr[] = {311,42,3,4,5,6,67};
    int* arrayptr = arr;

    printf("value at position 3 of the array %d\n", arr[3]);
    printf("The address of  first element of the array %d\n", &arr[0]);
    printf("The address of  first element of the array %d\n", arr);
    printf("The address of  second element of the array %d\n", &arr[1]);
    printf("The address of  second element of the array %d\n", arr + 1);
    // arr++; this line throw an error

    printf("The value at address of  first element of the array %d\n", *(&arr[0]));
    printf("The value at address of  first element of the array %d\n", *(arr));
    printf("The value at address of  first element of the array %d\n", arr[0]);
    printf("The value at address of  second element of the array %d\n", *(&arr[1]));
    printf("The value at address of  second element of the array %d\n", *(arr + 1));

    return 0;
}




