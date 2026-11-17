#include<stdio.h>
int main()
{
	int i,j,temp,n,min;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array before sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(i!=min)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	printf("Array after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;	
}
