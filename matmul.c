#include<stdio.h>
int main()
{
    int i,j,k,r1,c1,r2,c2,sum=0;
    printf("Enter row and column size of matrix 1");
    scanf("%d%d",&r1,&c1);
    printf("Enter row and column size of matrix 2");
    scanf("%d%d",&r2,&c2);
    int a[r1][c1],b[r2][c2],c[r1][c2];;
    if(c1==r2)
    {
        printf("enter elements of matrix 1\n");

        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
                scanf("%d",&a[i][j]);
        printf("Enter Matrix 2:\n");
        for(i=0;i<r2;i++)
           {
                for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<r1;i++)
           {
                for(j=0;j<c2;j++)
            {
               for(k=0;k<c1;k++)
                sum=sum+(a[i][k]*b[k][j]);
            c[i][j]=sum;
            sum=0;
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
        for(i=0;i<r2;i++)
           {
                for(j=0;j<c2;j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }
        printf("Multiplication of Matrices 1 and 2 is:\n");
        for(i=0;i<r1;i++)
           {
                for(j=0;j<c2;j++)
            {
                printf("%d  ",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("MATRIX MULTIPLICATION NOT POSSIBLE TRY OTHER SIZES OF MATRIX");
    return 0;
    
}