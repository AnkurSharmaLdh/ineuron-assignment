#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=4;i++)
{   int k=1;
    for(j=1;j<=7;j++)
    {   
        if(j>=1 && j<=5-i)
        printf("%d",k++);
        else if(j>=3+i && j<=7)
        printf("%d",--k);
        else
        printf(" ");
    }
    printf("\n");
}
return 0;
}