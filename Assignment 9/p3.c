/*Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/
#include<stdio.h>
int main()
{
int N;
printf("Enter the day number(1-7)");
scanf("%d",&N);
switch(N)
{
    case 1:
    printf("Sunday-Thought of the day:When you have a dream, you've got to grab it and never let go.");
    break;
    case 2:
    printf("Monday-Thought of the day:Nothing is impossible.");
    break;
    case 3:
    printf("Tuesday-Thought of the day:There is nothing impossible to they who will try");
    break;
    case 4:
    printf("Wednesday-Thought of the day:The bad news is time flies");
    break;
    case 5:
    printf("Thursday-Thought of the day:Life has got all those twists and turns");
    break;
    case 6:
    printf("Firday-Thought of the day:Keep your face always toward the sunshine, and shadows will fall behind you");
    break;
    case 7:
    printf("Staurday-Thought of the day:It's never too late to be what you might've been.");
    break;
    default:
    break ;
}
return 0;
}