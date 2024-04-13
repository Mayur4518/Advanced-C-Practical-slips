/*Write a program to perform the following operations on two 
strings using standard library functions:
a. Copy b. Compare*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int k,ch;
	printf("Enter string1:");
	gets(s1);
	printf("Enter string2:");
	gets(s2);
	
	    printf("Enter choice:1-copy\n2-compare:");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	       case 1:strcpy(s1,s2);
            	printf("\nfirst string=%s",s1);
            	printf("\nsecond string=%s",s2);
            	break;
           case 2:
	           k=strcmp(s1,s2);
         	
	    	if(k==0)
	    	printf("\nStrings are same");
	     	if(k>0)
	     	printf("\nFirst string is greater");
	        if(k<0)
	    	printf("\nSecond string is greater");
	    	break;
	    	default:printf("Invalid choice");
	   	}
}
