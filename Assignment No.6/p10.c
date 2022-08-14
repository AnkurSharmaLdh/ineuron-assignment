//Write a program to reverse a given number
#include<stdio.h>
int main()
{
 int N;
 printf("Enter a number:");
 scanf("%d",&N);
 while(N%10>0)
 {
     printf("%d",N%10);
     N=N/10;
 }
 return 0;
}
