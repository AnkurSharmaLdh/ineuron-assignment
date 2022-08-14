/*Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values: ");
    scanf("%d %d %d", &a, &b, &c);
    if(b*b==4*a*c)
        printf("Roots of quadratic equation are real & equal");
    else if(b*b>4*a*c)
        printf("Roots of quadratic equation are real and distinct");
    else
        printf("Roots of quadratic equation are imaginary");
    return 0;
}
