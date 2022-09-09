/*Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.*/
#include<stdio.h>
int main()
{
int N,x;
printf("Enter a number:");
scanf("%d", &N);
if(N>0)
x=1;
else
x=2;
switch(x)
{
    case 1:
    printf("%d",-N);
    break;
    case 2:
    printf("%d",-N);
}
return 0;
}