#include<stdio.h>
int main()
{
	FILE *f1;
	int c1=0,c2=0,c3=0;char ch;
	f1=fopen("abc.txt","r");
	if(f1==NULL)
	{
		printf("File not found");
		exit(0);
	}
	while(!feof(f1))
	{
		ch=fgetc(f1);
		if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
		c1++;
		else if(ch=='\n'||ch=='\0')
		c2++;
		else if(ch==' '||ch=='\0'||ch=='\t'||ch=='\n')
		c3++;
	}
	printf("Character count=%d",c1);
	printf("\nLine count=%d",c2);
	printf("\nWords count=%d",c3);
	fclose(f1);
}
