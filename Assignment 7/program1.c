#include<stdio.h>
int main()
{
int i,nth;
printf("Enter the term:");
scanf("%d",&nth);
int a=-1,b=1,c;
for(i=1;i<=nth;i++)
{
    c=a+b;
    a=b;
    b=c;

}
printf("%d",c);
return 0;
}