/*Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/
#include <stdio.h>
int main()
{
    int x, y, z;
    char operation;
printf("Enter the character:");
scanf("%c",&operation);
        printf("Enter the sides of triangle:");
        scanf("%d %d %d", &x, &y, &z);
switch (operation)
{
    case 'a':
        if (x == y || y == z || z == x)
        {
            printf("Isosceles Triangle");
        }

    case 'b':
        if ((x * x == y * y + z * z) || (y * y == x * x + z * z) || (z * z == y * y + x * x))
        {
            printf("Right angled triangle");
        }

    case 'c':
        if (x == y && y==z)
            printf("Equilateral triangle");

    default:
        break;
};
return 0 ;
}