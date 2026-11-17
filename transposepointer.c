//transpose of matrix using pointer into a function
#include<stdio.h>
void transpose(int r,int c,int a[][100])
{
	int i,j;
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
int main()
{
	int r,c,i,j,a[100][100];
	printf("Enter row and column size of array\n");
	scanf("%d%d",&r,&c);
	printf("Enter array elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	transpose(r,c,a);
 	return 0;
}

