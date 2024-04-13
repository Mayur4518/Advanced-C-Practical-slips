#include<stdio.h>
struct student
{
	int rno;
	char name[20];
	int per;
}s1[100];
int main()
{
	int i,ch,n;
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter rno,name and percentage:");
		scanf("%d%s%d",&s1[i].rno,&s1[i].name,&s1[i].per);
	}
	do{
		printf("\nEnter choice:\n1-display all\n2-display stud per>75");
		scanf("%d",&ch);
		printf("RNO  NAME  PER");
		printf("\n...............");
		switch(ch)
		{
			case 1:for(i=0;i<n;i++)
			       {
			       	printf("\n%d\t%s\t%d",s1[i].rno,s1[i].name,s1[i].per);
				   }
				   break;
			case 2:for(i=0;i<n;i++)
			       if(s1[i].per>75)
			       {
			       	printf("\n%d\t%s\t%d",s1[i].rno,s1[i].name,s1[i].per);
				   }
				   break;
			default:printf("Invalid choice");
			
		}
	}while(ch!=3);
}
