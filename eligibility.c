#include<stdio.h>
int main()
{
    int x;
	printf("Enter age to check eligibility\n");
	scanf("%d",&x);
	if(x>17)
	{
		printf("ELIGIBLE");
	}
	else
	{
		printf("NOT ELIGIBLE");
	}
}
