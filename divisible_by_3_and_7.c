#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number to be tested for divisibility by 3 and 7: ");
    scanf("%d" , &a);

    if ((a%3==0) && (a%7==0))
    {
        printf("The number is divisible by 3 and 7.");
    }
    else
    {
        printf("The number is not divisible by 3 and 7.");
    }
    return 0;
}
