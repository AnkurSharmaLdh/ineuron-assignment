//Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
    int i;
    float f;
    char c;
    double d;
    printf("Enter the character: ");
    scanf("%c", &c);
    printf("Size:%d\n",sizeof(c));

    printf("Enter the number: ");
    scanf("%d", &i);
    printf("Size:%d\n",sizeof(i));

    printf("Enter the float value: ");
    scanf("%f", &f);
    printf("Size:%d\n",sizeof(f));

    printf("Enter the double value: ");
    scanf("%dl", &d);
    printf("Size:%d\n",sizeof(d));
    return 0;
}
