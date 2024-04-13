/*Write a program to calculate area of a circle. Use macro for PI.*/
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

