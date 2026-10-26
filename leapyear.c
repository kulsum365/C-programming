#include<stdio.h>
int main()
{
	int x;
	printf("Enter year to check if leap year or not\n");
	scanf("%d",&x);
	if(x%4==0)
	{
		printf("Leap year");
	}
	else
	{
		printf("Not a leap year");
	}
	return 0;
}
