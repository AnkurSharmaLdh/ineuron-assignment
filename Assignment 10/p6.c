/*Write a function to calculate the factorial of a number. (TSRS)*/
#include<stdio.h>
int fact(int);
int main()
{
int N;
printf("Enter the number:");
scanf("%d",&N);
printf("%d",fact(N));
return 0;
}
int fact(int x)
{  
    for(int i=x;i>1;i--)
    {
    x=x*(i-1);
    }
    return x;
}