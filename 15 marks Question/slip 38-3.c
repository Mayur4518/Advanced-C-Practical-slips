/*Write a C program to create structure employee (id, name, salary). Accept 
details of n employees and perform the following operations:
a. Display all employees.
b. Display details of all employees having salary >500.*/
#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	int salary;
}e1[100];
int main()
{
	int i,n,ch;
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter id name and salary:");
		scanf("%d%s%d",&e1[i].id,&e1[i].name,&e1[i].salary);
	}
	do{
		printf("\nEnter choice:\n1-Display all\n2-display only sal>500");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:for(i=0;i<n;i++)
			       	printf("Employees=%s\n",e1[i].name);
			       	break;
			case 2:printf("ID  NAME  SALARY");
			       printf("\n................");
			       for(i=0;i<n;i++)
			       {
			       	if(e1[i].salary>500)
			       	{
			       		printf("\n%d\t%s\t%d",e1[i].id,e1[i].name,e1[i].salary);
				    }
				   }
				   break;
			default:printf("Invalid choice");
		}
	}while(ch<3);
}
