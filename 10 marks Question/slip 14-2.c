#include<stdio.h>
#include<conio.h>
int main(int argc,char *argv[])
{
	int a,b,c;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=atoi(argv[3]);
	if(a>b&&a>c)
	  printf("%d is greater",a);
	else if(b>a&&b>c)
	  printf("%d is greater",b);
	else
	  printf("%d is greater",c);
}
