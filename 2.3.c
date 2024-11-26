// A program to calculate electricity bill given the number of units as input.

#include <stdio.h>
int main()
{
int u, cpu,c;
scanf("%d", &u);
int sc= 100;
//int c=(u*cpu)+sc;

if(u>=0 && u<100)
{
	cpu=1;
printf("The cost of the electricity bill for %d is %d", u, c=(u*cpu)+sc);
}

else if(u>=100 && u<200)
{
	cpu=2;
printf("The cost of the elcetricity bill for %d is %d", u, c=(u*cpu)+sc);
}

else
{
 cpu=3; 
printf("The cost of the electricity bill for %d is %d", u, c=(u*cpu)+sc);
}
return 0;
}
