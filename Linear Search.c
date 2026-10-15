#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[10],key,found=0;
	printf("enter the elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
printf("enter the element to be searched");
scanf("%d",&key);
for(i=0;i<n;i++)
{

if(a[i]==key)
{
	printf("the element found at position:%d",i+1);
	found=1;
	break;
}
}
if (a[i]==0)

{

	printf("the element not found");
	found=0;
	
}

}
