/*Write a program to copy contents of one file to another.*/
#include<stdio.h>
int main()
{
	FILE *f1,*f2;
	char ch;
	f1=fopen("student.txt","r");
	f2=fopen("stud.txt","w");
	if(f1==NULL)
	{
		printf("File not found");
		exit(0);
	}
	while(!feof(f1))
	{
		ch=fgetc(f1);
		fputc(ch,f2);
	}
	printf("File copy successfully");
}
