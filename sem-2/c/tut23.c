//                                                                        Arrays

#include <stdio.h>

int main()
{

    // printf("Deep");
    int marks[][4] = {{45, 54, 565, 10}, {3, 5, 4, 3}};

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element of the arrays\n", i);
    //     scanf("%d", &marks[i]);
    // }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            /* code */

            // printf("The value of %d,%d element of the arrays is %d\n", i, j, marks[i][j]);
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    // marks [0]= 34;
    // printf("marks of student 1 is %d\n", marks[0]);

    // marks [0]= 4;
    // marks [1]= 64;
    // marks [2]= 34;
    // marks [3]= 54;

    // printf("marks of student 1 is %d\n", marks[0]);

    return 0;
}
