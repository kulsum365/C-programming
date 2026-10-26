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
	if(x==a)
	{
		printf("Palindrome");
	}
	else
	{
		printf("not palindrome");
	}

	return 0;	
}

	
