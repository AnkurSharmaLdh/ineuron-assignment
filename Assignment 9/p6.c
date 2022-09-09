/* Program to check whether a year is a leap year or not. Using switch
statement */
#include<stdio.h>
int main()
{
int year,value;
printf("Enter the year:");
scanf("%d",&year);
value= ((year%4==0 && year%100!=0) || (year % 400==0));
switch(value)
{
    case 1:
    printf("Leap year");
    break;
    case 0:
    printf("Not a leap year");
    break;
    defalut:
    printf("Invalid");
    break;
}
return 0;
}