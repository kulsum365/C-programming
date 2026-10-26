#include<stdio.h>
int main()
{
	int x,i,f=0;
	printf("Enter number to check prime or not\n");
	scanf("%d",&x);
	if(x<=1)
	printf("NOT PRIME");
	for(i=2;i<x;i++)
		{
	    	if(x%i==0)
			f++;
		}
	if(f==0)
		printf("PRIME");
	else
		printf("NOT PRTIME");
	return 0;
}
