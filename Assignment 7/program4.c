//Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
int i,N1,N2,HCF;
printf("Enter two numbers:");
scanf("%d%d",&N1,&N2);
for(i=1;i<=N1;i++)
{
    if(N1%i==0 && N2%i==0)
    HCF=i;
}
    printf("%d",HCF);
return 0;
}