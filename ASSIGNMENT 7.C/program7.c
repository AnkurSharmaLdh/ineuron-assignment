//Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
int i,j,N1,N2,count=0;
printf("Enter two numbers:");
scanf("%d %d",&N1,&N2);
for(i=N1;i<=N2;i++)
{
for(j=1;j<=i;j++)
{ 
    if(i%j==0)
    count++;    
}
if(count==2)
printf("%d ",i);
count=0;
}
return 0;
} 