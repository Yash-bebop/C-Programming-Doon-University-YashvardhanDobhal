#include <stdio.h>
#include<math.h>
int main()
{
 int a;
 printf("Enter number: ");
 scanf("%d" , &a);

 if (a < 0) 
 {
    printf("Negative number is not a valid input.");
 }
 else
{
 if(a/sqrt(a)==sqrt(a))
 {
    printf("The number is a perfect square.");
 }
 else
 {
    printf("The number is not a perfect square.");
 }
}
return 0;
}