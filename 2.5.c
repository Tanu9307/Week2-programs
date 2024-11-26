// A program to check if three numbers are equal or not 

#include <stdio.h>
int main() {
    int a,b,c;
    printf("Give three numbers ");
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c)
    printf("Given three numbers are equal");
    else
    printf("Given three numbers are not equal");
    return 0;
}