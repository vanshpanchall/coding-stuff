// solution of ex. 2

// kms to miles
// inches to foot
// cms to inches
// pound to kgs
// inchess to meters

#include <stdio.h>

int main()
{
    char input;
    float kmstomiles = 0.621371;
    float inchetofoot = 0.0833333;
    float cmstoinches = 0.393701;
    float poundtokgs = 0.453592;
    float inchesstometers = 0.0254;
    float first, second;
    while (1)
    {
        printf("Enter to input character. q to quit \n     1. kms to miles\n     2. inches to foot\n     3. cms to inches\n     4. pound to kgs\n     5. inchess to meters\n");

        scanf(" %c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting the program...");
            goto end;
            break;

        case '1':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);

            second = first * kmstomiles;
            printf(" %f kms is equal to %f miles\n", first, second);
            break;

        case '2':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);

            second = first * inchetofoot;
            printf(" %f inches is equal to %f foot\n", first, second);
            break;

        case '3':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);

            second = first * cmstoinches;
            printf(" %f cms is equal to %f inches\n", first, second);
            break;

        case '4':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);

            second = first * poundtokgs;
            printf(" %f pound is equal to %f kgs\n", first, second);
            break;

        case '5':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);

            second = first * inchesstometers;
            printf(" %f inches is equal to %fmeters\n", first, second);
            break;

        default:

            break;
        }
    }

end:

    return 0;
}
