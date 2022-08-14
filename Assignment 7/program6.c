//Write a program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
int i,N,count=0;
for(N=2;N<=100;N++)
{
for(i=1;i<=N;i++)
{ 
    if(N%i==0)
    count++;    
}
if(count==2)
printf("%d ",N);
count=0;
}
return 0;
} 
/*/Write a program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
int i,N,count=0;
for(N=2;N<=100;N++)
{
for(i=1;i<N;i++)
{
    if(N%i==0)
    {
    count++;
    }
    else if(i==N-1 &&  count ==1)
    {
        printf("%d ",N);
    }
}
count =0;
}
return 0;
}*/
