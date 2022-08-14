//Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    if(N>=0)
        printf("Positive number");
    else
        printf("Non-positive number");
    return 0;
}
