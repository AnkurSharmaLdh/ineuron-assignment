/*Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.*/

#include<stdio.h>
int main()
{
    int l1,l2,l3;
    printf("Enter the lengths of triangle: ");
    scanf("%d %d %d", &l1, &l2, &l3);
    if((l1+l2>l3)&&(l1+l3>l2)&&(l2+l3>l1))
        printf("Triangle is valid");
    else
        printf("Triangle is invalid");
    return 0;
}
