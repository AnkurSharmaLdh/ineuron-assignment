//Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values: ");
    scanf("%d %d", &a, &b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("a=%d b=%d",a,b);
    return 0;
}

