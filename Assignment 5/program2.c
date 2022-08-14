//Write a program to print the first N natural numbers.

#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
     {
         printf("%d ",i);
     }
    return 0;
}
