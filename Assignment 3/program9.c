/*Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b)
    {
        if(b>c)
            printf("%d",a);
        else
        {
            if(a>c)
                printf("%d",a);
            else
                printf("%d",c);
        }
    }
    else if(b>a)
    {
        if(a>c)
            printf("%d",b);
        else
        {
            if(b>c)
                printf("%d",b);
            else
                printf("%d",c);
        }
    }
    else if(c>a)
    {
        if(a>b)
            printf("%d",c);
        else
        {
            if(c>b)
                printf("%d",c);
            else
                printf("%d",b);
        }
    }
    else if(a==b)
        {
            if(a>c)
                printf("%d",a);
            else
                printf("%d",c);
        }
    else if(a==c)
        {
            if(a>b)
                printf("%d",a);
            else
                printf("%d",b);
        }
    else if(b==c)
        {
            if(a>b)
                printf("%d",a);
            else
                printf("%d",b);
        }
    else if(a==b==c)
        printf("%d",a);
    return 0;
}
