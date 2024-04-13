#include<stdio.h>
struct items
{
	int code;
	char name[20];
	int price;
}i1[100];
int main()
{
	int i,n;
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter code name and price:");
		scanf("%d%s%d",&i1[i].code,&i1[i].name,&i1[i].price);
	}
	printf("CODE  NAME  PRICE");
	printf("\n.................");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%s\t%d",i1[i].code,i1[i].name,i1[i].price);
	}
}
