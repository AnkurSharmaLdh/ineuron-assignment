//Write a program to print the first N odd natural numbers

#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
     {
         printf("%d ",i+1);
         i++;
     }
    return 0;
}


