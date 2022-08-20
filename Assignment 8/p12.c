#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=4;i++)
{   int A=64;
    for(j=1;j<=7;j++)
    {   
        if(j>=i && j<=4)
        printf("%c",++A);
        else if(j>4 && j<=8-i)
        printf("%c",--A);
        else
        printf(" ");
    }
    printf("\n");
}
return 0;
}