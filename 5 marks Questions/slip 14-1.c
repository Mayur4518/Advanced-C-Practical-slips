/*Write a C program to compare two strings using standard library 
function.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int k;
	printf("Enter string 1:");
	gets(s1);
	printf("Enter string 2:");
	gets(s2);
	k=strcmp(s1,s2);
	{
		if(k==0)
		  printf("\nStrings are same");
		else if(k>0)
		  printf("\nFirst string is greater");
		else if(k<0)
		  printf("\nSecond string is greater");
		  
	}
}
