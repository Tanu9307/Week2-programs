// A program to print a number of days in a month by taking year and month numbers as input

#include <stdio.h>
int main() {
    int Y,M,D;
    printf("Give the year ");
    scanf("%d", &Y);
    printf("Give the month ");
    scanf("%d", &M);
    if((Y%4==0 && Y%100!=0) || Y%400==0)
    {
        if(M==2)
        printf("The number of days are 29");
        else if(M==1|| M==3|| M==5|| M==7|| M==8|| M==10|| M==12)
        printf("The number of days are 31");
        else
        printf("The number of days are 30");
    }
    else
     {
        if(M==2)
        printf("The number of days are 28");
        else if(M==1|| M==3|| M==5|| M==7|| M==8|| M==10|| M==12)
        printf("The number of days are 31");
        else
        printf("The number of days are 30");
    }
    return 0;
}