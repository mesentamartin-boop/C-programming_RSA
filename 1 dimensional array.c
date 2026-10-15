#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	int arr[10];
	printf("enter the limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<n;i++)
	{
		printf("the array elements are: %d",arr[i]);
	}
}
