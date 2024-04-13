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
