/*Write a program to check whether two given numbers are co-prime
numbers or not*/
int main()
{
int i,N1,N2,HCF;
printf("Enter two numbers:");
scanf("%d%d",&N1,&N2);
for(i=1;i<=N1;i++)
{
    if(N1%i==0 && N2%i==0)
    HCF=i;
}
    if(HCF==1)
    printf("Co-Prime");
    else
    printf("NOt Co-Prime");
return 0;
}