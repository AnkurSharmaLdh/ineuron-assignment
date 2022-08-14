//Write a program to print a table of N.

#include<stdio.h>
int main()
{
    int N=5,i;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
     {
         printf("%d*%d=%d\n",N,i,N*i);
     }
    return 0;
}


