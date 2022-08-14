//Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=N;i>=1;i--)
    {
        printf("%d ",i-1);
        i--;
    }
    return 0;
}

