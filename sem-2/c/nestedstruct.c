#include <stdio.h>
#include <conio.h>
struct address
{
    char city[20];
    int pin;
    char phone[14];
};
struct employee
{
    char name[20];
    struct address add;
};
void main()
{
    struct employee emp;
    printf("Enter employee information?\n");
    printf("Name:");
    scanf("%s", &emp.name);
    printf("City:");
    scanf("%s", &emp.add.city);
    printf("Pincode:");
    scanf("%d", &emp.add.pin);
    printf("Phone:");
    scanf("%s", &emp.add.phone);

    printf("Printing the employee information....\n");
    printf("Name: %s", emp.name);
    printf("\nCity: %s", emp.add.city);
    printf("\nPincode: %d", emp.add.pin);
    printf("\nPhone: %s", emp.add.phone);
    getch();
}