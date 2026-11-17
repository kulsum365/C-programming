#include<stdio.h>
int factorial(int num);
int rev(int n);
void main()
{
	int x,t;
	printf("enter number\n");
	scanf("%d",&x);
	int c=factorial(x);
	printf("enter number\n");
	scanf("%d",&t);
	int d=rev(t);
	printf("Factorial of %d is %d\n",x,c);
	printf("reverse of %d is %d",t,d);
}
int factorial(int num)
{
	int i, f=1;
	for(i=1;i<=num;i++)
	f=f*i;
	return f;
}
int rev(int n)
{
	int sum=0,d;
	while(n>0)
	{
		d=n%10;
		sum=sum*10+d;
		n/=10;
	}
	return sum;
}
