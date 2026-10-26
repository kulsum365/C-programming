#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number to get its factorial\n");
	scanf("%d",&x);
	int i;
	int p=1;
	for(i=x;i>=1;i--)
		p=p*i;	
	printf("%d",p);
	return 0;
}
