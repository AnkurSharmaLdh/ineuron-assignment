/*Write a program to check whether a given number is divisible by 3 and divisible by 2.*/

#include<stdio.h>
int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    if(N%3==0&&N%2==0)
        printf("%d is divisible by 3 and divisible by 2",N);
    else if(N%3==0||N%2==0)
    {
        if(N%3==0)
            printf("%d is divisible by 3 only",N);
        else
            printf("%d is divisible by 2 only",N);
    }
    return 0;
}
