/* Write a function to print all prime factors of a given number. For example, if the 
number is 36 then your result should be 2, 2, 3, 3. (TSRN) */
#include<stdio.h>
int main()
{
    int N;
    printf("Enter the number:");
    scanf("%d",&N);
    for(int i=2;N>1;)
    {   if(N%i==0)
        {
        printf("%d ",i);
        if(i<=N)
        {
        N=N/i;
        }
        else
        {
        N=N/1;
        }
        i=2;
        }
        else
        { 
        i++;
        }
    }    

return 0;
}