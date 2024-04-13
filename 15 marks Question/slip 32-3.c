/*Write a program to accept details of n students (roll number, name, and 
percentage) using structure. Perform the following operations 
using menu:
a. Display all students
b. Display all students having percentage >75.*/
#include<stdio.h>
struct student
{
	int rno;
	char name[20];
	int per;
}s1[100];
int main()
{
	int i,n,ch;
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter rno name and per:");
		scanf("%d%s%d",&s1[i].rno,&s1[i].name,&s1[i].per);
	}
	do{
		printf("\nEnter choice:\n1-Display all\n2-display only per>75");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:for(i=0;i<n;i++)
			       	printf("students=%s\n",s1[i].name);
			       	break;
			case 2:printf("RNO  NAME  PER");
			       printf("\n................");
			       for(i=0;i<n;i++)
			       {
			       	if(s1[i].per>=75)
			       	{
			       		printf("\n%d\t%s\t%d",s1[i].rno,s1[i].name,s1[i].per);
				    }
				   }
				   break;
			default:printf("Invalid choice");
		}
	}while(ch<3);
}
