//factorial using pointer
#include<stdio.h>
int fact(int*n)
{
	int temp;
	if(*n==1)
	return 1;
	else
	{
		temp= *n - 1;
		return *n * fact(&temp);	
	}	
}
int main()
{
	int n;
	printf("Enter number to get factorial\n");
	scanf("%d",&n);
	printf("%d!=%d",n,fact(&n));
	return 0;
}
