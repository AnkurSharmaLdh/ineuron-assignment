/*Write a function to print first N odd natural numbers (TSRN)*/
#include<stdio.h>
void fun(int);
int main()
{
int N;
printf("Enter the number:");
scanf("%d", &N);
fun(N);
return 0;
}
void fun(int x)
{
    for(int i=1;i<=x;i+=2)
    printf("%d ",i);
}