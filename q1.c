 #include <stdio.h>
int main()
{
    int no;

    printf("Enter any number:");
    scanf("%d", &no);

    printf("This number is %s\n", (no % 2 == 0) ? "Even" : "Odd");
   
    return 0;
}
