/*Write a program to create student structure having fields roll no, 
name. Accept details of one student and write a function to 
display the details.*/
#include<stdio.h>
struct student
{
	int rno;
	char name[20];
}s1;
void disp(struct student s1);
int main()
{
	printf("Enter student rno and name:");
	scanf("%d%s",&s1.rno,&s1.name);
	disp(s1);
}
void disp(struct student s1)
{
	printf("RNO   NAME");
	printf("\n.........");
	printf("\n%d\t%s",s1.rno,s1.name);
}
