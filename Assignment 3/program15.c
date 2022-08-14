/*Write a program to check whether a given number is positive, negative or zero.*/

#include<stdio.h>
int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    if(N>0)
        printf("Positive number");
    else if(N<0)
        printf("Negative number");
    else
        printf("Zero");
    return 0;
}
