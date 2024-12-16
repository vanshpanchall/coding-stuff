#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] |= '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{

    // char str[] = {'d','e','e','p','\0'};
    // char str[5] = "Deep";
    char str[34];
    gets(str);
    printf("Using coustem function printStr\n");
    printStr(str);
    printf("Using printf %s", str);
    printf("\nusing puts: \n");
    puts(str);
    return 0;
}
