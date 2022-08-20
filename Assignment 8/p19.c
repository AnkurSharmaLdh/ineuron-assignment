#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=3;i++)
{
    for(j=1;j<=19;j++)
    {
        if(i+j>=4 && j-i<=6)
        printf("*");
        else if(i+j>=14 && j-i<17)
        printf("*");
        else 
        printf(" ");
    }
    printf("\n");
}
for(i=1;i<=10;i++)
{
    for(j=1;j<=19;j++)
    {   if(i==1 && j==8)
        printf("MYSIRG");
        if(i==1 && j>=8 && j<=13)
        continue;
        if(j>i&&i+j<=19)
        printf("*");
        else
        printf(" ");
    }
    printf("\n");
}
return 0;
}
