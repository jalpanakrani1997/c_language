#include <stdio.h>
main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 3)
        {
            printf("* * * * *");
        }
        else
        {
            printf("*       *");
        }
        printf("\n");
    }
}