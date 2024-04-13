/*Write a C program to copy the contents of one text file to another such 
that uppercase alphabets are converted to lowercase, lowercase to
uppercase and digits are converted to *.*/
#include<stdio.h>
int main()
{
	FILE *f1,*f2;
	char ch;
	f1=fopen("abc.txt","r");
	f2=fopen("om.txt","w");
	if(f1==NULL)
	{
		printf("File not found");
		exit(0);
	}
	while(!feof(f1))
	{
		ch=fgetc(f1);
		if(ch>='A'&&ch<='Z')
		ch=ch+32;
		
		else if(ch>='a'&&ch<='z')
		ch=ch-32;
		
		else if(ch>='0'&&ch<='9')
		ch='*';
		fputc(ch,f2);
	}
	printf("File copy succesfully");
}
