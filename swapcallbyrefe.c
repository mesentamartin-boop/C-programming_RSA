#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b =temp;
	

int main()
{

 int a,b;
 printf("enter two numbers: ");
 scanf("%d %d",&a,&b);
 printf("before swapping:%d %d\n",a,b);
 swap(&a,&b);
 printf("after swapping: %d %d\n",a,b);
 return 0;
}
