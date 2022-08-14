/*Write a program to check whether a given number is there in the Fibonacci
series or not.*/
#include<stdio.h>
int main()
{
int i,N1,N2;
printf("Enter the Length of fabonacci series:");
scanf("%d",&N1);
printf("Enter the number wants to search:");
scanf("%d",&N2);
int a=-1,b=1,c;
for(i=1;i<=N1;i++)
{
    c=a+b;
    a=b;
    b=c;
    if(c==N2)
    break;
}
    (N2==c)?printf("%d is found at found at %dth position",N2,i) : printf("%d is doesn't found",N2);
return 0;
}