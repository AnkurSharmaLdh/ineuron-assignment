/*Write a program to check whether a given alphabet is in uppercase or lowercase*/

#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character you wants to check: ");
    scanf("%c",&c);
    if(c>=65&&c<=90)
        printf("Alphabet is upper case");
    else if(c>=97&&c<=122)
        printf("Alphabet is lower case");
    else
        printf("Speacial character");
    return 0;
}
