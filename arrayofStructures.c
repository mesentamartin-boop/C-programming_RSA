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
	struct Student s[3];
	int i;
	for(i=0;i<3;i++)
	{
	printf("enter roll no:");
	scanf("%d",&s[i].rollno);
	printf("enter name:");
	scanf("%s",s[i].name);
	printf("enter mark:");
	scanf("%f",&s[i].mark);
	}
	
printf("\n student details\n");
for(i=0;i<3;i++)
{
	printf("Roll Number:%d\n",s[i].rollno);
	printf("Name:%s\n",s[i].name);
	printf("mark:%2f\n",s[i].mark);
	
}
return 0;
}
