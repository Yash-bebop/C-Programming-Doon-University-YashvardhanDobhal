#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the 1st angle of triangle: ");
    scanf("%f" , &a);

    printf("Enter the 2nd angle of triangle: ");
    scanf("%f" , &b);

    printf("Enter the 3rd angle of triangle: ");
    scanf("%f" , &c);

    if(a+b+c==180)
    {
        printf("The triangle is valid\n");
    }
    else
    {
        printf("Triangle is not valid");
    }
    return 0;
}