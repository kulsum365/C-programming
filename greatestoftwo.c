#include<stdio.h>
int main()
{
    int x,y;
	printf("Enter two numbers to check greatest\n");
	scanf("%d%d",&x,&y);
	if(x>y)
	{
		printf("%d is greater",x);
	}
	else
	{
		printf("%d is greater",y);
	}
}
