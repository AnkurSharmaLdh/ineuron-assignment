//Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
int i,N,Sum=0;
printf("Enter the value of N:");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
    Sum=Sum+i*i*i;
}
printf("Sum=%d",Sum);
return 0;
}