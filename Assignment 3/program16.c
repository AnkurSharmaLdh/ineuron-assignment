/*Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/

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
        printf("Special character");
    return 0;
}

