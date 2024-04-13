#include<stdio.h>
#include<string.h>
int length(char s1[20])
{
	int i;
	for(i=0;s1[i]!='\0';i++);
      return i;
}
void copied(char s1[20],char s2[20])
{
	int i;
	for(i=0;s2[i]!='\0';i++)
	{
		s1[i]=s2[i];
	}
	s1[i]='\0';
	printf("\n first String=%s",s1);
	printf("\n second string=%s",s1);
}
void upper(char s1[20])
{
	int i;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='a'&&s1[i]<='z')
		s1[i]=s1[i]-32;
	}
	printf("\nUpper case string=%s",s1);
}
int main()
{
	char s1[20],s2[20];
	int ch;
	printf("Enter string 1:");
	gets(s1);
	printf("Enter string 2:");
	gets(s2);
	printf("\nEnter choice:\n1-Length of string:\n2-copy string:\n3-Uppercase string:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("\n Length of string 1=%d",length(s1));
		       printf("\n Length of string 2=%d",length(s2));
		       break;
		case 2:copied(s1,s2);	
		       break;
		case 3:upper(s1);
		       upper(s2);
		       break;
		default:printf("Invalid choice");
	}
}
