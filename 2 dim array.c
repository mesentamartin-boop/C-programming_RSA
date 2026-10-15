#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,r,c,arr[10][10];
	printf("enter the elements of rows");
	scanf("%d",&r);
	printf("enter the elements of columns");
	scanf("%d",&c);
	printf("enter the elements");
	
	
    for(i=0;i<r;i++)
     {
     	for(j=0;j<c;j++)
     	{
     	  scanf("%d   ",&arr[i][j]);	
		  
		 }
      }
      
      for(i=0;i<r;i++)
     {
     	for(j=0;j<c;j++)
     	{
     	  printf("%d  ",arr[i][j]);
     }
		   	
        printf("\n");
}
}




