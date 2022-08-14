//Write a program to print a given number without its last digit.

#include<stdio.h>
int main()
{   int N;
    printf("Enter the value: ");
    scanf("%d",&N);
    printf("Unit digit = %d",N-N%10);
    return 0;
}
