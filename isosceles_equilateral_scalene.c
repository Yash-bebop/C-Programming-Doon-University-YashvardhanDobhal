#include <stdio.h>
int main()
{
    float x,y,z,a,b,c;
    int choice;
    printf("Test by(1-Test by Angle 2-Test by Side)");
    scanf("%d" , &choice);
    
    switch(choice)
 { case 1 : {
    printf("Enter the degree measure of 1st angle of triangle: ");
    scanf("%f" , &x);

    printf("Enter the degree measure of 2nd angle of triangle: ");
    scanf("%f" , &y);

    printf("Enter the degree measure of 3rd angle of triangle: ");
    scanf("%f" , &z);

    if ((x+y+z==180))
    {
        if ((x==y) && (y==z) && (z==x))
        {
            printf("The triangle is equilateral");
        }
        else if ((x==y) || (y==z) || (z==x))
        {
            printf("The triangle is isosceles");
        }
        else
        {
            printf("The triangle is scalene");
        }
    }
    else
    {
        printf("This is not a valid triangle.");
    }
    break;
}
   case 2 :
 {   printf("Enter the length measure of 1st side of triangle: ");
    scanf("%f" , &a);

    printf("Enter the length measure of 2nd side of triangle: ");
    scanf("%f" , &b);

    printf("Enter the length measure of 3rd side of triangle: ");
    scanf("%f" , &c);

    if ((a+b>c) && (b+c>a) && (c+a>b))
    {
        if ((a==b) && (b==c) && (c==a))
        {
            printf("The triangle is equilateral");
        }
        else if ((a==b) || (b==c) || (c==a))
        {
            printf("The triangle is isosceles");
        }
        else
        {
            printf("The triangle is scalene");
        }
    }
    else
    {
        printf("This is not a valid triangle.");
    }
break;
} 
}
 return 0;
}