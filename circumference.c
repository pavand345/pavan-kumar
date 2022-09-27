#include<stdio.h>
#define pi 3.14159
int main()
{
	float radius;
	printf("enter the radius\n");
	scanf("%f",&radius);
	printf("Area = %.2f\n",(pi*radius*radius));
	printf("circumference of circle = %.2f\n",(2*pi*radius));
}

