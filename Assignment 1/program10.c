/*WAP to take date as an input in below given format and convert the date format and
display the result as given below.
User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
*/
#include<stdio.h>
int main()
{
    int D,M,Y,a=47;
    printf("Enter values: ");
    scanf("%d%c%d%c%d",&D,&a,&M,&a,&Y);
    printf("Day-%d ,Month-%d, year-%d",D,M,Y);
    return 0;
}
