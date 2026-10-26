#include<stdio.h>
int main()
{
	int d,y,w,rd;
	printf("Enter the days to convert in years, weeks and remaining days\n");
	scanf("%d",&d);
	if(d>=365)
	{
		y=d/365;
		d=d-(365*y);
		w=d/7;
		rd=d%7;
	}
	else
	{
		y=0;
		w=d/7;
		rd=d%7;
	}
	printf("%dyears, %dweeks and %ddays",y,w,rd);
	return 0;	
}