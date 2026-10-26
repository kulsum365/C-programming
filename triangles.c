#include<stdio.h>
int main()
{
    int x,y,z;
	printf("Enter three sides of triangle to check type\n");
	scanf("%d%d%d",&x,&y,&z);
	if((x==y&&y==z)&&(x==z))
	{
		printf("EQUILATERAL TRIANGLE");
	}
	else if((x==y)||(x==z)||(z==y))
	{
		printf("ISOSCELES TRIANGLE");
	}
	else
	{
		printf("SCALENE TRIANGLE");
	}
}
