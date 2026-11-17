#include<stdio.h>
void main()
{
	int mid,l,h,n,i,s,j,temp;
	printf("Entwer size of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("Entwer elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Entwer enter element to be searched in array:\n");
	scanf("%d",&s);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}	
	l=0;
	h=n-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(a[mid]==s)
		{
			printf("Element found at %d ",mid);
			break;
		}
		if(s<a[mid])
			h=mid-1;
		else
			l=mid+1;
	}
	if(l==n)
	{
		printf("Element not found");
	}
}
