/*Write a program to check whether a given number is a Prime number or
not*/
#include<stdio.h>
int main()
{
int i,N,count=0;
printf("Enter the number:");
scanf("%d", &N);
for(i=1;i<=N;i++)
{ 
    if(N%i==0)
    count++;
}
if(count==2)
printf("%d is a prime number",N);
else
printf("%d is not a prime number",N);
return 0;
}