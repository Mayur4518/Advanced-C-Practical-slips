#include<stdio.h>
struct emp
{
	int eno;
	char ename[20];
	int sal;
}e1[100];
void disp(struct emp e1[100],int n);
int main()
{
	int i,n;
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter eno ename and salary:");
		scanf("%d%s%d",&e1[i].eno,&e1[i].ename,&e1[i].sal);
	}
	disp(e1,n);
}
void disp(struct emp e1[100],int n)
{
	int i;
	printf("ENO  ENAME SALARY");
	printf("\n.................");
	for(i=0;i<n;i++)
	{
		if(e1[i].sal>10000)
		  printf("\n%d\t%s\t%d",e1[i].eno,e1[i].ename,e1[i].sal);
	}
}
