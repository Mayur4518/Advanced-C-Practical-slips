#include<stdio.h>
#define MAX(a,b) a>b?a:b
int main()
{
	int a,b;
	printf("Enter two no:");
	scanf("%d%d",&a,&b);
	printf("Maximum no=%d",MAX(a,b));
}
