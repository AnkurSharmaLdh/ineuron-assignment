/*Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/

#include<stdio.h>
int main()
{
    int N,A;
    printf("Enter the number: ");
    scanf("%d", &N);
    printf("Enter the Append digit: ");
    scanf("%d", &A);
    printf("%d",N*10+A);
    return 0;
}
