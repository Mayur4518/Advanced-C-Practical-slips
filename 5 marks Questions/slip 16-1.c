/*Write a program to find the length of a string using standard library 
function.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	int k=0;
	printf("Enter string:");
	gets(s1);
	k=strlen(s1);
	printf("Length of string=%d",k);
}
