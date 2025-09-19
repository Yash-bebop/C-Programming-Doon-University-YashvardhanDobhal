#include <stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter the number upto which you want a sum of squares 1-n: ");
    scanf("%d" , &a);
    for(int i=1 ; i<=a ; i++)
    {
        sum=sum+(i*i);
    }
        printf("The sum is: %d\n" , sum);
    return 0;
}
