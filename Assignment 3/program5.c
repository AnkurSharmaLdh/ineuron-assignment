//Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d",&N);
    if(N/1000==0&N/100!=0&N/10!=0)
        printf("%d is a three digit number",N);
    else
        printf("%d is not a three digit number",N);
    return 0;
}
