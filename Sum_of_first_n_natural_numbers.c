#include <stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter the number upto which you want a sum 1-n: ");
    scanf("%d" , &a);
    for(int i=1 ; i<=a ; i++)
    {
        sum=sum+i;
    }
        printf("The sum is: %d\n" , sum);
    return 0;
}
