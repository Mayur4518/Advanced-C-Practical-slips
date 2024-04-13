#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int k,ch;
	printf("Enter string 1:");
	gets(s1);
	printf("Enter string 2:");
	gets(s2);
	do{
		printf("Enter choice:\n1-compare\n2-copy");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:k=strcmp(s1,s2);
			       {
			       	if(k==0)
			       	  printf("Strings are same");
			       	else if(k>0)
			       	  printf("1st string is greater");
			       	else if(k<0)
			       	printf("2nd string is greater");
			       }
			       break;
			case 2:strcpy(s1,s2);
			       printf("first string=%s",s1);
			       printf("second string=%s",s2);
			       break;
			default:printf("Invalid choice");			   
		}
	}while(ch<3);
}
