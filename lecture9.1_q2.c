#include <stdio.h>
main()
{
    int i;
    char a[50];

    printf("\nEnter any string: ");
    gets(a);

    printf("\nLowercase string: ");
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            a[i] += 32;
        }
        printf("%c", a[i]);
    }
    printf("\n\n");
}