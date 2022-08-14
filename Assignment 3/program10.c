/*Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.*/

#include<stdio.h>
int main()
{
    int CP,SP,per=37;
    printf("Enter the values: ");
    scanf("%d %d", &CP, &SP);
    if(SP-CP>=0)
        printf("Profit is %d%c",((SP-CP)*100)/SP,per);
    else
        printf("Loss is %d%c",((CP-SP)*100)/SP,per);
    return 0;
}
