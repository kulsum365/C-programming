//minimum of array using pointer
#include<stdio.h>
int array_min(int *p,int n)
{
	int i;
	int min=*p;
	for(i=1;i<n;i++)
	{
		if(min>*(p+i))
		min=*(p+i);
	}
 	return min;
}
int main()
{
	int a[100],i,n;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Minimum value =%d\n",array_min(&a,n));
	return 0;
}

