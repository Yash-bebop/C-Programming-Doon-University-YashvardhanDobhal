#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d" , &a);
if (a%2==0)
{
    printf("The number is Even!\n");
}
else
{
    printf("The Number is Odd!\n");
}
return 0;
}