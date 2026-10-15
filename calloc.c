#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,newn,n;
	printf("enter size of elements");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	if (p==NULL)
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
	printf("enter new size");
	scanf("%d",&newn);
	p=(int *)realloc(p,newn*sizeof(int));
	if(p==NULL)
	{
	  return 1;
	}
	if(newn>n)
	{
		for(i=n;i<newn;i++)
		{
			scanf("%d",&p[i]);
		}
	}
printf("array elements:\n");

	for(i=0;i<newn;i++)
		{
			printf("%d",p[i]);
		}

		
	free(p);
	
	
}
