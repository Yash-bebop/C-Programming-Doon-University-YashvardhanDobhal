#include <stdio.h>
int main()
{
    double a,b,c;
    printf("Enter the age of Person 1: ");
    scanf("%lf" , &a);

    printf("Enter the age of Person 2: ");
    scanf("%lf" , &b);

    printf("Enter the age of Person 3: ");
    scanf("%lf" , &c);

    if ((a==b) && (b==c) && (c==a))
     {
        printf("All of them are of the same age.");
     } 

     else
{

    if (a>=b && a>=c)
    {
        printf("The oldest of the 3 persons is Person 1.\n");
    }
    else if (b>=a && b>=c)
    {
        printf("The oldest of the 3 persons is Person 2.\n");
    
    }
    else
    {
        printf("The oldest of the 3 persons is Person 3.\n");
    }
}

   
    return 0;
}