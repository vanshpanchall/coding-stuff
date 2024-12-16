#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, a, size;
    printf("Enter the size of Array: ");
    scanf("%d", &size);
    a = (int *) malloc(i * sizeof(int));
    if (a != NULL)
    {
        printf("Memory Allocated Successfully \n");
        for (int i = 0; i < size; i++)
        {
            printf("Enter Array: ");
            scanf("%d", &a);
        }
        for (int i = 0; i < size; i++)
        {
            printf("Value of Array: %d\n", a);
        }
        free(a);
        printf("Memory Allocated Successfully\n");
    }
    else
    {
        printf("Memory Allocated Unsuccessfully");
    }
    return 0;
}



// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n, i, *ptr, sum = 0;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     ptr = (int *)malloc(n * sizeof(int));

//     // if memory cannot be allocated
//     if (ptr == NULL)
//     {
//         printf("Error! memory not allocated.");
//         exit(0);
//     }

//     printf("Enter elements: ");
//     for (i = 0; i < n; ++i)
//     {
//         scanf("%d", ptr + i);
//         sum += *(ptr + i);
//     }

//     printf("Sum = %d", sum);

//     // deallocating the memory
//     free(ptr);

//     return 0;
// }
