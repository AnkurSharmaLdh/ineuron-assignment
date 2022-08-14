/*Write a program to check whether the given number is even or odd using a bitwise
operator.*/
#include<stdio.h>
int main()
{
    int N;
    printf("Enter the binary number: ");
    scanf("%d", &N);

    if(N%10==1)
       printf("Odd number");
    else
       printf("even number");
    return 0;
}
