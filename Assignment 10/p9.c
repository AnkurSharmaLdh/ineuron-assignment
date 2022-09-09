/*Write a function to check whether a given number contains a given digit or not. 
(TSRS)*/
#include<stdio.h>
int fun(int,int);
int main()
{
int N,n;
printf("Enter the number:");
scanf("%d",&N);
printf("Enter the digit:");
scanf("%d",&n);
fun(N,n);
if(fun(N,n)==1)
printf("%d is present",n);
else
printf("%d is not present",n);
return 0;
}
int fun(int x, int y)
{
    while(x>0)
    {   if(x%10==y)
        {
            return 1;
        }
        else
        x=x/10;
        continue;
    }
    return 0;
}