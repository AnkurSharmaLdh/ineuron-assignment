/*Write a function to calculate the area of a circle. (TSRS)*/
#include<stdio.h>
float fun(float);
int main()
{
float r,Area;
printf("Enter the radius:");
scanf("%f",&r);
Area=fun(r);
printf("%.2f",Area);
}
float fun(float x)
{
return 3.14*x*x;
}