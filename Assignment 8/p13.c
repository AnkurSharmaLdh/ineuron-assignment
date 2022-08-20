#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=7;i++)
{   int A=65;
    for(j=1;j<=13;j++)
    {   
        if(j>=1 && j<=8-i)
        printf("%c",A++);
        else if(j>=6+i && j<=13)
        printf("%c",--A);
        else
        printf(" ");
    }
    printf("\n");
}
return 0;
}