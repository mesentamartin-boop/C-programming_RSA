#include<stdio.h>
#include<conio.h>
struct Student
{
	int rollno;
	char name[30];
	float mark;
};
int main()
{
	struct Student s;
	printf("enter roll no:");
	scanf("%d",&s.rollno);
	printf("enter name:");
	scanf("%s",s.name);
	printf("enter mark:");
	scanf("%f",&s.mark);
	printf("\n Student details\n");
	printf("Roll Number:%d\n",s.rollno);
	printf("Name:%s\n",s.name);
	printf("mark:%f\n",s.mark);
	return 0;
	}
