/*Create a structure employee (id, name, salary). Accept details of n 
employees and find the details of employee having maximum salary. 
Write separate function.*/
#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	long int sal;
}e1[100];
int main()
{
	int i,n;
	void disp_max(struct employee e1[100],int n);
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter id name and sal:");
		scanf("%d%s%d",&e1[i].id,&e1[i].name,&e1[i].sal);
	}
	void disp_max(e1,n);
}
void disp_max(struct employee e1[100],int n)
{
	int max=e1[0].sal;
	int i,index=0;
	for(i=0;i<n;i++)
	{
		if(e1[i].sal>max)
		{
			max=e1[i].sal;
			index=i;
		}
	}
	printf("\nEmp id=%d",e1[index].id);
	printf("\nEmp name=%s",e1[index].name);
	printf("\nEmp sal=%d",e1[index].sal);
	
}
