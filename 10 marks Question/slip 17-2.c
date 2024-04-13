/*Write a program to perform the following operations on strings using 
standard library functions:
a. Copy one string to another
b. Convert a string to uppercase.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int ch;
	printf("Enter string 1:");
	gets(s1);
	printf("Enter string 2:");
	gets(s2);
	printf("Enter choice:\n1-Copy:\n2-uppercase:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:strcpy(s1,s2);
		       printf("\n1st string=%s",s1);
		       printf("\n2nd string=%s",s2);
		       break;
		case 2:strupr(s1);
		       strupr(s2);
		       printf("\nUpeercase string 1=%s",s1);
		       printf("\nUppercase string 2=%s",s2);
		       break;
		default:printf("Invalid choice");
	}
}
