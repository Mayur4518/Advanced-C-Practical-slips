/*Write a C program to create a structure named book (book_name, 
author_name and price) and display all book details having price >
in a proper format by passing the structure array as function argument.*/
#include<stdio.h>
struct book
{
	char bname[20],auther[20];
	int price;
}b1[100];
int main()
{
	int i,n;
	void disp(struct book b1[100],int n);
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter bname,auther name and price:");
		scanf("%s%s%d",&b1[i].bname,&b1[i].auther,&b1[i].price);
	}
disp(b1,n);
}
void disp(struct book b1[100],int n)
{
	int i;
	printf("Bookname  Auther  Price");
	printf("\n................");
	for(i=0;i<n;i++)
	{
		if(b1[i].price>=500);
		{
		printf("\n%s\t%s\t%d",b1[i].bname,b1[i].auther,b1[i].price);
	    }
	}
}
