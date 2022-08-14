//Write a program to find next Prime number of a given number
#include<stdio.h>
int main()
{
int i,j,N,count=0;
printf("Enter a number:");
scanf("%d",&N);
for(i=N+1;count!=2;i++)
{
for(j=1;j<=i;j++)
{ 
    if(i%j==0)
    count++;    
}
if(count==2)
printf("%d",i);
else
count=0;
}
return 0;
} 