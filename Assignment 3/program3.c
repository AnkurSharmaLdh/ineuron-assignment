/*Write a program to check whether a given number is an even number or an odd
number.*/

#include<stdio.h>
int main()
{
    int N;
    printf("Enter the number:");
    scanf("%d",&N);
    if(N%2==0)
        printf("%d is a Even no", N);
    else
        printf("%d is an Odd number", N);
    return 0;
}

