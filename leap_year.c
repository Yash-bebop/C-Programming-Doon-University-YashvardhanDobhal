#include <stdio.h>
int main()
{
    int a;
    printf("Enter the year you wish to check: ");
    scanf("%d" , &a);

    if (a%4==0)
    {
        printf("%d is a leap year" , a);
    }
    return 0;
}