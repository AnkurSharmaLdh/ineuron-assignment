/*Write a program to check whether a given number is divisible by 7 or divisible by 3.*/

#include<stdio.h>
int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    if(N%7==0&&N%3==0)
        printf("%d is divisible by 7 and divisible by 3",N);
    else if(N%7==0||N%3==0)
    {
        if(N%7==0)
            printf("%d is divisible by 7 only",N);
        else
            printf("%d is divisible by 3 only",N);
    }
    return 0;
}
