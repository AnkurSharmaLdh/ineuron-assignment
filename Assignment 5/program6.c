//Write a program to print the first N even natural numbers

#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=2;i<=N;i++)
     {
         printf("%d ",i);
         i++;
     }
    return 0;
}

