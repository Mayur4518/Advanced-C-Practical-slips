/*Write a C program to find the area of a circle by using PI as
macro.*/
#include<stdio.h>
#define PI 3.14
int main()
{
	float r,a;
	printf("Enter radius:");
	scanf("%f",&r);
	a=PI*r*r;
	printf("Area of circle=%f",a);
}
