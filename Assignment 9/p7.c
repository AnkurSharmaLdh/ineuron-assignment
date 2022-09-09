/* Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill. */
#include<stdio.h>
int main()
{
float x,bill,surcharge;
int y;
printf("Enter the number of units:");
scanf("%f",&x);
if(x>=0&&x<=50)
y=1;
else if(x>50&&x<=150)
y=2;
else if(x>150&&x<=250)
y=3;
else if(x>250)
y=4;
switch(y)
{
    case 1:
    bill=x*0.5;
    surcharge= bill*0.2;
    printf("%0.2f",bill+surcharge);
    break;
    case 2:
    bill=50*0.5 + (x-50)*0.75;
    surcharge= bill*0.2;
    printf("%0.2f",bill+surcharge);
    break;
    case 3:
    bill=50*0.5 + 100*0.75 + (x-150)*1.20;
    surcharge= bill*0.2;
    printf("%0.2f",bill+surcharge);
    break;
    case 4:
    bill=50*0.5 + 100*0.75 + 100*1.20 + (x-250)*1.50;
    surcharge= bill*0.2;
    printf("%0.2f",bill+surcharge);
}
return 0;
}
