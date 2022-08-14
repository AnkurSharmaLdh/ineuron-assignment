/*Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/
#include<stdio.h>
int main()
{
    int N;
    printf("Enter the amount in INR: ");
    scanf("%d", &N);
    printf("%0.3f",N/76.23);
    return 0;
}
