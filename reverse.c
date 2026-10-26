#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	int r=a;
	int x=0;
	while(r>0)
	{
		int d=r%10;
		x=x*10+d;
		r/=10;
	}
	printf("reverse is %d",x);
	return 0;	
}

	
