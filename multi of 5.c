#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,multi;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{ 
	  multi=i*n;
	  printf("%d * %d = %d \n",i,n,multi);
	  
	}
}
