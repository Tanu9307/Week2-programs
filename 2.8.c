// A program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle  

#include <stdio.h>
int main() {
    int a,b,c;
    printf("Give the value of three sides of the triangle ");
    scanf("%d %d %d", &a, &b, &c);
    if (a==b && b==c)
    printf("With the given values of the sides of the triangle we get a equilateral triangle");
    else if (a==b ^ b==c)
    printf("With the given values of the sides of the triangle we get a isosceles triangle");
    else
    printf("With the given values of the sides of the triangle we get a scalene triangle");
    return 0;
}