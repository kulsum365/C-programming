//maximum of array using pointer
#include<stdio.h>
int array_max(int *p,int n)
{
	int i;
	int max=*p;
	for(i=1;i<n;i++)
	{
		if(max<*(p+i))
		max=*(p+i);
	}
 	return max;
}
int main()
{
	int a[100],i,n;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Maximum value =%d\n",array_max(&a,n));
	return 0;
}

