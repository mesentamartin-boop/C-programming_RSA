#include<stdio.h>
#include<conio.h>
int main()
{
FILE *fp;
char text[100];
fp=fopen("sample.txt","w");
if(fp==NULL)
{
	printf("file cannot be opend");
	return 1;
}
printf("enter text");
scanf("%[^\n]",text);
fprintf(fp,"%s",text);
fclose(fp);
fopen("sample.txt","r");
if(fp==NULL)
{
	printf("file  cannot be opend");
	return 1;
	
}
printf("\n contents of file:\n");
while(fgets(text,sizeof(text),fp)!=NULL)
{
	printf("%s",text);
}
fclose(fp);
return 0;
}


