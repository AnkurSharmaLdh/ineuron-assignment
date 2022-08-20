#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=5;i++)
{   int A=64;
    for(j=1;j<=9;j++)
    {   
        if(j>=6-i && j<=5)
        {
            printf("%c",++A);
        }
        else if(j>5 && j<=i+4)
        {   
            printf("%c",--A);
        }
        else
        printf(" ");
    }
    printf("\n");
}
return 0;
}