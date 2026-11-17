#include<stdio.h>
int main()
{
	int i,n,r,sum=0,c,f;
	printf("Enter number:\n");
	scanf("%d",&n);
	int x=n;
	for(;n>0;)
	{
		r=n%10;
		f=1;
		for(i=1;i<=r;i++)
			f=f*i;
		sum=sum+f;
		n=n/10;
	}
	if(sum==x)
	printf("%d is a strong number",x);
	else
	printf("%d is not a strong number",x);
	return 0;	
}
