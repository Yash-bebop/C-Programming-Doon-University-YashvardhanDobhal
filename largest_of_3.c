#include <stdio.h>
int main()
{
    double a,b,c;
    printf("Enter the 1st number: ");
    scanf("%lf" , &a);

    printf("Enter the 2nd number: ");
    scanf("%lf" , &b);

    printf("Enter the 3rd number: ");
    scanf("%lf" , &c);

    if (a>=b && a>=c)
    {
        printf("The largest of the 3 numbers is: %.2lf\n" , a );
    }
    else if (b>=a && b>=c)
    {
        printf("The largest of the 3 numbers is: %.2lf\n" , b);
    
    }
    else
    {
        printf("The largest of the 3 numbers is: %.2lf\n" , c);
    }
    return 0;
}