/*Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)*/
#include <stdio.h>
int fun(int, int, int);
int main()
{
    int N, r;
    printf("Enter the total number of items:");
    scanf("%d", &N);
    printf("Enter the number of selected items:");
    scanf("%d", &r);
    int q;
    q = N - r;
    int a = fun(N, r, q);
    printf("%d", a);
    return 0;
}
int fun(int x, int y, int z)
{
    for (int i = x; i > 1; i--)
    {
        x = x * (i - 1);
    }
    for (int i = y; i > 1; i--)

    {
        y = y * (i - 1);
    }
    for (int i = z; i > 1; i--)
    {
        z = z * (i - 1);
    }
    return x / ((y) * (z));
}