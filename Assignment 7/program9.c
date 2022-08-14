/*Write a program to check whether a given number is an Armstrong number
or not*/
#include<stdio.h>
int main()
{
int R, Sum=0,i,N,N1;
printf("Enter the number:");
scanf("%d",&N);
N1=N;
while(N!=0)
{
 R=N%10;
 Sum=Sum+(R*R*R);
 N=N/10;
}
if(N1==Sum)
printf("Given number is an Armstrong number");
else
printf("Given number is not an Armstrong number");
return 0;
}