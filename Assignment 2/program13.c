/*Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right*/

#include<stdio.h>
int main()
{
    int N;
    printf("Enter a three digit number: ");
    scanf("%d", &N);
    printf("%d",(N%10)*100+N/10);
    return 0;
}
