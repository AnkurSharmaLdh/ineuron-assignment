/*Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/
#include<stdio.h>
int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    printf("%d",N-N%10);
    return 0;
}
