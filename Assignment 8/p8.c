#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=4;i++)
{   int K=1,count=0;
    for(j=1;j<=7;j++)
    {   
        if(j>4-i && j<4+i)
        {   count++;
            if(count<=4)
            printf("%d",K++);
            else 
            {
            printf("%d",K--);
            }
        }
        else
        printf(" ");
    }
    printf("\n");
}
return 0;
}