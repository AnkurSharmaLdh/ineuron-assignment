//Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int N;
    printf("Enter a three digit number: ");
    scanf("%d",&N);
    printf("%d", N/100 + (N/10)%10 + N%10);
    return 0;
}
