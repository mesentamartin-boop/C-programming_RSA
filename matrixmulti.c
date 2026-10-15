#include<stdio.h>
#include<conio.h>
void readMatrix(int matrix[10][10],int r1,int c1,int r2,int c2)
void multMatrix(int A[10][10], int B[10][10], int C[10][10], int r1, int c1,int r2,int c2)
int main()
{
	printf("enter rows and colomns of matrix 1");
	scanf("%d %d",&r1,&c1);
	printf("enter rows and columns of matrix 2 ");
	scanf("%d %d ",&r2,&c2);
	multMatrix(A, B, C, r1, c1, r2, c2);
	
	
	if(c1!=r2)
	{
		printf("the multiplication is not possibile");
		else
		
		{
			
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			scanf("%d",&A[i][j]);
			}	
		}
	}
	
	for(i=o;i<c1;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&B[i][j])
		}
	}
	

}
