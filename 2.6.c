// A program to take 3 input value and output maximum point value

#include <stdio.h>
int main() {
    int a,b,c;
    printf("Give three input values\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a>=b && a>>c)
    printf("The maximum point value is %d", a);
    else if(b>=c && b>>a)
    printf("The maximum point value is %d", b);
    else if(a>=c && a>>b)
    printf("The maximum point value is %d", a);
    else if(b>=a && b>>c)
    printf("The maximum point value is %d", b);
    else if(c>=a && c>>b)
    printf("The maximum point value is %d", c);
    else if(c>=b && c>>a)
    printf("The maximum point value is %d", c);
    else if(a>=b && a<<c)
    printf("The maximum point value is %d", c);
    else if(b>=c && b<<a)
    printf("The maximum point value is %d", a);
    else if(a>=c && a<<b)
    printf("The maximum point value is %d", b);
    else if(b>=a && b<<c)
    printf("The maximum point value is %d", c);
    else if(c>=a && c<<b)
    printf("The maximum point value is %d", b);
    else if(c>=b && c<<a)
    printf("The maximum point value is %d", a);
    else
    printf("The maximum point value is %d", a);
    return 0;
}