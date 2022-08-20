/* Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit */
#include <stdio.h>
int main()
{
    char operation;
    int x,y;
    printf("a. Addition \nb. Subtraction \nc. Multiplication \nd. Division \ne. Exit */\n");

    printf("Enter the character: ");
    scanf("%c", &operation);
    switch (operation)
    {
    case 'a': 
    {   int x,y;
        printf("Enter two numbers:");
        scanf("%d %d", &x, &y);
        printf("%d", x + y);
        break;
    } 
    case 'b': 
    {   printf("Enter two numbers:");
        scanf("%d %d", &x, &y);
        printf("%d", x - y);
        break;
    } 
    case 'c': 
    {   printf("Enter two numbers:");
        scanf("%d %d", &x, &y);
        printf("%d", x * y);
        break;
    } 
    case 'd': 
    {   printf("Enter two numbers:");
        scanf("%d %d", &x, &y);
        printf("%d", x / y);
        break;
    } 
   
    case 'e': 
    {
        break;
    } 
   
        default:
        break;
    }
    return 0;
}