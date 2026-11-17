#include<stdio.h>
int factorial(int num)
{
	int i, f=1;
	for(i=1;i<=num;i++)
	f=f*i;
	return f;
}
int main()
{
	int i,n,r,sum=0,c;
	printf("Enter number:\n");
	scanf("%d",&n);
	int x=n;
	while(n>0)
	{
		r=n%10;
		c=factorial(r);
		sum=sum+c;
		n=n/10;
	}
	if(sum==x)
	printf("%d is a strong number",x);
	else
	printf("%d is not a strong number",x);
	return 0;	
}
