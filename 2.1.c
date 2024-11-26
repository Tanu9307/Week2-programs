// A program to print greatest of three numbers

#include <stdio.h>
int main ()
{
int a,b,c;
scanf("%d %d %d", &a, &b, &c);

if(a>>b && a>>c)
printf("%d is the greatest of the three numbers", a);

else if(b>>a && b>>c)
printf("%d is the greatest of the three numbers",b);

else
printf("%d is the greatest of the three numbers",c);
return 0;	
}
