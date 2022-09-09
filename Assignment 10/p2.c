/*Write a function to calculate simple interest. (TSRS)*/
#include<stdio.h>
float SI(float, float, float);
int main()
{
 float p,r,t,A;
 printf("Enter the value of principal amount , interest rate , time :");
 scanf("%f %f %f", &p,&r,&t);
 A=SI(p,r,t);
 printf("Simple inetrest is %.2f",A);
}
float SI(float x, float y, float z)
{
    return (x*y*z)/100.00;
}