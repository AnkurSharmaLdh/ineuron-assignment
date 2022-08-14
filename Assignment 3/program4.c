/*Write a program to check whether a given number is an even number or an odd
number without using % operator.*/

#include<stdio.h>
int main()
{
    int N,R;
    printf("Enter the number:");
    scanf("%d", &N);
    R= N/2;
    if(N-2*R==0)
        printf("%d is a Even number",N);
    else
        printf("%d is an Odd number",N);
    return 0;
}

