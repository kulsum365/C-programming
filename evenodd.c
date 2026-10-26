#include<stdio.h>
int main()
{
    int x;
	printf("Enter age to check even or odd\n");
	scanf("%d",&x);
	if((x%2)==0)
	{
		printf("EVEN");
	}
	else
	{
		printf("ODD");
	}
}
