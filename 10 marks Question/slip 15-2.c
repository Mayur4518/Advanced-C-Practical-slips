/*Write a C program to count the number of characters and lines in a 
text file.*/
#include<stdio.h>
int main()
{
	FILE *f1;
	int c1=0,c2=0;char ch;
	f1=fopen("abc.txt","r");
	if(f1==NULL)
	{
		printf("File not found");
		exit(0);
	}
	while(!feof(f1));
	{
		ch=fgetc(f1);
		if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
		c1++;
		else if(ch=='\n'||ch=='\0')
		c2++;
	}
	printf("Character count=%d",c1);
	printf("line count=%d",c2);
	fclose(f1);
}
