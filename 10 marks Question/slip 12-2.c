#include<stdio.h>
int main()
{
	char s1[100];
	int c1=0,c2=0,i;
	printf("Enter string:");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	 {
	
		if(s1[i]=='a'||s1[i]=='A'||s1[i]=='e'||s1[i]=='E'||s1[i]=='i'||s1[i]=='I'||s1[i]=='o'||
		 s1[i]=='O'||s1[i]=='u'||s1[i]=='U')
		 c1++;
		 else
		 c2++;
    }
    printf("\nVowel count=%d",c1);
    printf("\nConsonant count=%d",c2);
	
}
