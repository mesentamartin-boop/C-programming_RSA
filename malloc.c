#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	printf("enter number of elements");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)
	{
		return 1;
	}
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d",p[i]);
		
	}
	free(p);
}
