/*Write a menu driven program using standard library function
• To find Length of string
• To compare two strings
• To copy one string to other.
• To concatenate two strings*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int ch,k,k1;
	printf("Enter string 1:");
	gets(s1);
	printf("Enter string 2:");
	gets(s2);
	do{
		printf("Enter choice:\n1-Length:\n2-compare:\n3-copy:\n4-concatnate:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:k=strlen(s1);
			       k1=strlen(s2);
			       printf("\nLength of 1st string=%d",k);
			       printf("\nLength of 2nd string=%d",k1);
			       break;
			case 2:k=strcmp(s1,s2);
			       {
			       	if(k==0)
			       	  printf("Strings are same");
			       	else if(k>0)
			       	  printf("1st string is greater");
			       	else
			       	  printf("2nd string is greater");
				   }
				   break;
			case 3:strcpy(s1,s2);
			       printf("\n1st string=%s",s1);
			       printf("\n2nd string=%s",s2);
			       break;
			case 4:strcat(s1,s2);
			       printf("\nconcate string=%s",s1);
			       break;
			default:printf("Invalid choice");	       
		}
	}while(ch<4);
}
