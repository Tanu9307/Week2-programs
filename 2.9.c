// A program to input a day number and print weekday 

#include <stdio.h>
int main() {
    int a;
    printf("Give a number from 1-7 to print the corresponding weekday ");
    scanf("%d", &a);
    if (a==1)
    printf("Monday");
    else if (a==2)
    printf("Tuesday");
    else if (a==3)
    printf("Wednesday");
    else if (a==4)
    printf("Thursday");
    else if (a==5)
    printf("Friday");
    else if (a==6)
    printf("Saturday");
    else if (a==7)
    printf("Sunday");
    else
    printf("Please type a number from 1-7");
    return 0;
}