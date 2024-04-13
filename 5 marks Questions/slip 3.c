 /*Write a program to calculate length of string using standard library function*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	int s;
	printf("Enter string:");
	gets(s1);
	s=strlen(s1);
	printf("\nLength of string=%d",s);
}
