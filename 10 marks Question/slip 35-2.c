/*Write a program to accept and display details of 5 employees (id, 
name, salary) using structure.*/
#include<stdio.h>
struct emp
{
	int id;
	char name[20];
	int sal;
}e1[5];
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter 5 employees id name sal");
		scanf("%d%s%d",&e1[i].id,&e1[i].name,&e1[i].sal);
    }
    printf("ID  NAME  SAL");
    printf("\n.................");
    for(i=0;i<5;i++)
    {
    	printf("\n%d\t%s\t%d",e1[i].id,e1[i].name,e1[i].sal);
	}
}
