/*Program to Convert even number into its upper nearest odd number
Switch Statement.*/
#include<stdio.h>
int main()
{
int N;
printf("Enter the number:");
scanf("%d",&N);
switch(N%2==0)
{
    case 1:
    printf("%d",N+1);
    break;
    case 0:
    break;
}
return 0;
}