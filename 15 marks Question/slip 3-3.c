/*Write a program to declare a structure person (name, address) which 
contains another structure birthdate (day, month, year). Accept the details
of n persons and display them.*/
#include<stdio.h>
 struct person
 {
 	char name[20],address[20];
 	struct birthdate
 	{
 		int dd,mm,yyyy;
	 }b1;
 }p1[100];
 int main()
 {
 	int i,n;
 	printf("Enter limit:");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		printf("Enter name and address:");
 		scanf("%s%s",&p1[i].name,&p1[i].address);
 		printf("Enter birtdate:");
 		scanf("%d%d%d",&p1[i].b1.dd,&p1[i].b1.mm,&p1[i].b1.yyyy);
	 }
	   printf("Name  Address  Birthdate");
	   printf("\n..........................");
	   for(i=0;i<n;i++)
	   {
	   	printf("\n%s\t%s\t%d-%d-%d",p1[i].name,p1[i].address,p1[i].b1.dd,p1[i].b1.mm,p1[i].b1.yyyy);
	   }
 	
 }
