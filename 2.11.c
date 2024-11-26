// A program to find the next date

#include<stdio.h>
int main(){
int d, m, y;
printf("Give a date in the order of dd mm yyyy\n");
scanf("%d %d %d", &d, &m, &y);
if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && d<=30)
{
	d+=1;
	printf("The following date is %d %d %d", d, m, y);
}
else if((m==4 || m==6 || m==9 || m==11) && d<=29)
{
	d+=1;
	printf("The following date is %d %d %d", d, m, y);
}
else if(m==2 && d<=28 && ((y%4==0 && y%100!=0) || y%400==0))
{
	d+=1;
    printf("The following date is %d %d %d", d, m, y);	
}
else if(m==2 && d<=27 && (y%4!=0 && y%100==0))
{
	d+=1;
	printf("The following date is %d %d %d", d, m, y);
}
else if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && d==31)
{
	d=1;
	m+=1;
	printf("The following date is %d %d %d", d, m, y);
}
else if((m==4 || m==6 || m==9 || m==11) && d==30)
{
	d=1;
	m+=1;
	printf("The following date is %d %d %d", d, m, y);
}
else if(m==2 && d==29 && (y%4==0 && y%100!=0) || y%400==0)
{
    d=1;
    m=3;
    printf("The following date is %d %d %d", d, m, y);
}
else if(m==12 && d==31)
{
    d=1;
    m=1;
    y++;
}
else
printf("Invalid date");
return 0;
}