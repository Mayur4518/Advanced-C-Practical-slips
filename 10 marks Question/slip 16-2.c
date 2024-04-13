/*Write a program to read a text file and display all the characters such 
that the case is reversed (upper to lower and lower to upper case).*/
#include<stdio.h>

int main()
{
	FILE *f1;
	char ch;
	f1=fopen("abc.txt","r");
	if(f1==NULL)
	{
		printf("File not found");
		exit(0);
	}
	while(!feof(f1));
	{
		ch=fgetc(f1);
		if(ch>='a'&&ch<='z')
		ch=ch+32;
		else if(ch>='A'&&ch<='Z')
		ch=ch-32;
		fputc(ch,f1);
	}
}
