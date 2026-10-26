#include<stdio.h>
int main()
{
    int i,j,r1,c1,r2,c2;
    printf("Enter row and column size of matrix 1");
    scanf("%d%d",&r1,&c1);
    printf("Enter row and column size of matrix 2");
    scanf("%d%d",&r2,&c2);
    int a[r1][c1],b[r2][c2];
    if(r1==r2&&c1==c2)
    {
        printf("enter elements of matrix 1\n");

        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
                scanf("%d",&a[i][j]);
        printf("Enter Matrix 2:\n");
        for(i=0;i<r1;i++)
           {
                for(j=0;j<c1;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        int c[r1][c1];
        for(i=0;i<r1;i++)
           {
                for(j=0;j<c1;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("Matrix 1:\n"); 
        for(i=0;i<r1;i++)
           {
                for(j=0;j<c1;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        printf("Matrix 2:\n"); 
        for(i=0;i<r1;i++)
           {
                for(j=0;j<c1;j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }
        printf("Addition of Matrices 1 and 2 is:\n");
        for(i=0;i<r1;i++)
           {
                for(j=0;j<c1;j++)
            {
                printf("%d  ",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("MATRIX ADDITION IS NOT POSSIBLE");
    return 0;
    
}