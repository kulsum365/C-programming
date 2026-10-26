#include<stdio.h>
int main()
{
	int n1=0;
	int n2=1;int i;
	printf("%d ",n1);
	printf("%d",n2);
	for(i=1;i<=10;i++)
	{
		int x=n1+n2;
		n1=n2;
		n2=x;
		printf(" %d ",x);
	}        
	return 0;
}
