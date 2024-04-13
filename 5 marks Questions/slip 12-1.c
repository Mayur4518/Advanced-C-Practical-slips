#include<stdio.h>
int main()
{
	int a,b,*p1,*p2,t=0;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	t=*p1;
	*p1=*p2;
	*p2=t;
	printf("Swaping numbers=%d\t%d",*p1,*p2);
}
