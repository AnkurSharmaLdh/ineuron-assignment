//Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
int i,N,fact=1;
printf("Enter the value of N:");
scanf("%d",&N);
for(i=N;i>=1;i--)
{
    fact=fact*i;
}
printf("fact=%d",fact);

return 0;
}