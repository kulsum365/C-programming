#include<stdio.h>
int main()
{
	int x,y,i,g;
	printf("Enter two numbers to get their LCM\n");
	scanf("%d%d",&x,&y);
	if(x>y)
	g=x;
	else
	g=y;
	for(i=g;i>0;i++)
	{
		if(x%i==0&&y%i==0)
		printf("LCM is %d",i);
	}
	
}

