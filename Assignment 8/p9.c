#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=4;i++)
{   int k=0;
    for(j=1;j<=7;j++)
    {   
        if(j>=i && j<=4)
        printf("%d",++k);
        else if(j>4 && j<=8-i)
        printf("%d",--k);
        else
        printf(" ");
    }
    printf("\n");
}
return 0;
}