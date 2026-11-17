//selection sort using pointers
#include<stdio.h>
 void swap(int* x, int* y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int i,max,j,n,*p,a[n];
	p=a;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",(p+i));
	for(i=0;i<n-1;i++)
	{
		max=i;
		for(j=i;j<n;j++)
		{
			if(*(p+max)>*(p+j))
			max=j;
		}
		if(i!=max)
		{
			swap((p+i),(p+max));
		}
	}
	printf("Sorted array is:\n");
	for(i=0;i<n;i++)
	printf("%d ",*(p+i));
	return 0;
}

