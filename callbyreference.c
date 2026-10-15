#include<stdio.h>
#include<conio.h>
void change(int *x)
{
printf("value of x:%d\n",*x);
	*x=20;
	
}
int main()
{
	int a=10;
	printf("before function call:a=%d\n",a);
	change(&a);
	printf("after function call:a=%d\n",a);
}
