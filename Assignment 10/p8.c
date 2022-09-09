/*Write a function to calculate the number of arrangements one can make from n items 
and r selected at a time. (TSRS)*/
#include <stdio.h>
int fact(int n)
{ int ans=1;
   for(int i=n;i>1;i--)
   {
       ans=ans*i;
   }
    return ans;
}
int permutation(int n, int r)
{
    int ans=(fact(n))/(fact(n-r));
    return ans;
}

int main()
{
    int n,r;
    printf("Enter the total number of items:");
    scanf("%d", &n);
    printf("Enter the number of selected items:");
    scanf("%d", &r);
    int ans=permutation(n,r);
    printf("%d",ans);
    return 0;
}
