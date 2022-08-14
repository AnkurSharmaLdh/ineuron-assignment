//Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
int i,N;
printf("Enter the number:");
scanf("%d",&N);
int a=-1,b=1,c;
for(i=1;i<=N;i++)
{
    c=a+b;
    a=b;
    b=c;
printf("%d ",c);
}

return 0;
}