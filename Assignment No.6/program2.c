//Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{ 
  int i,N,Sum=0;
  printf("Enter the value of N:");
  scanf("%d",&N);
  for(i=1;i<=N;i++)
   {
    Sum=Sum+(2*i);
   }
  printf("%d",Sum);
return 0;
}
