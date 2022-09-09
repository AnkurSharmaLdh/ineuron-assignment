/*Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");*/
#include<stdio.h>
int main()
{
int var;
printf("Enter the var:");
scanf("%d",&var);
switch(var)
{
case 1:
System.out.println("good");
case 2:
System.out.println("better");
case 3:
System.out.println("best");
default:
System.out.println("invalid");
}
return 0;
}