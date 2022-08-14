//Write a program to print the first N even natural numbers in reverse order

#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=N+2;i>=3;i--)
    {
        printf("%d ",i-2);
        i--;
    }
    return 0;
}


