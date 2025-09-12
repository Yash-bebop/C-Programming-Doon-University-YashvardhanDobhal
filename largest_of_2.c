#include <stdio.h>
int main()
{
    double a,b;
    printf("Enter the 1st number: ");
    scanf("%lf" , &a);

    printf("Enter the 2nd number: ");
    scanf("%lf" , &b);

    if (a>b)
    {
        printf("The largest of the 2 numbers is: %.2lf\n" , a );
    }
    else if (b>a)
    {
        printf("The largest of the 2 numbers is: %.2lf\n" , b);
    
    }
    else
    {
        printf("Both the numbers are equal.\n");
    }
    return 0;
}