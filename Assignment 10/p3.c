/* Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)*/
#include <stdio.h>
int fun(int); 
int main()
{
    int N;
    printf("Enter the number:");
    scanf("%d",&N);
    printf("%d", fun(N));
}
int fun(int x)
{
    if (x % 2 == 0)
        return 1;
    else
        return 0;
}