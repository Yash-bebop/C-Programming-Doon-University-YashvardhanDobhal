#include <stdio.h>
int main()
{
int num;
    printf("Enter The Number: ");
    scanf("%d" , &num);

if (num>0)
{
    printf("The number is positive\n");
}
else if (num==0)
{
    printf("You've input zero!\n");
}
else
{
    printf("The number is negative\n");
}
return 0;
}
