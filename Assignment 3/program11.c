/*Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/

#include<stdio.h>
int main()
{
    int maths,chemistry,physics,English,punjabi;
    printf("Enter the marks of each subject: ");
    scanf("%d %d %d %d %d", &maths, &chemistry, &physics, &English, &punjabi);
    if(maths>=33&&chemistry>=33&&physics>=33&&English>=33&&punjabi>=33)
        printf("Passed");
    else
        printf("Failed");
    return 0;
}

