#include <stdio.h>
#include <stdlib.h>
int main(){
    int *a, i, size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    a = (int *) calloc (size, sizeof(int));
    if(a!=NULL)
    {
        printf("Memory allocated successfully\n");
        free(a);
        printf("Memory Allocated \n");
    }
    return 0;
}