//Write a program to find the position of first 1 in LSB.
#include<stdio.h>
int main()
{
    int b;
    printf("Enter a binary digit value: ");
    scanf("%d", &b);
    printf("%d", b>>31);
    return 0;
}
