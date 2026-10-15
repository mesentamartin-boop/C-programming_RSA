#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter 2 numbers");
	scanf("%d %d",&a,&b);
	printf("Bitwise AND=%d\n",a&b);
	printf("Bitwise OR=%d\n",a|b);
	printf("Bitwise XOR=%d\n",a^b);
	printf("Bitwise NOT of a=%d\n",~a);
	printf("left shift of a=%d\n",a<<1);
	printf("right shift of a=%d\n",a>>1);
	
	
	
}
