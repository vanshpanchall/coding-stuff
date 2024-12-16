#include <stdio.h>
#include <stdlib.h>
struct person
{
    int rollno;
    char name[30];
};
int main()
{
    struct person *ptr;
    int i, n;
    printf("Enter the number of persons: ");
    scanf("%d", &n);
    // allocating memory for n numbers of struct person
    ptr = (struct person *)malloc(n * sizeof(struct person));
    for (i = 0; i < n; ++i)
    {
        printf("\nEnter Rollno:");
        scanf("%d", &(ptr + i)->rollno);
        printf("\nEnter Name:");
        scanf("%s", &(ptr + i)->name);
    }
    printf("Displaying Information:\n");
    for (i = 0; i < n; ++i)
        printf("Rollno: %d \t Name: %s\n", (ptr + i)->rollno, (ptr + i)->name);
    return 0;
}