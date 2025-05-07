#include<stdio.h>
int main()
{
	float a,b,sum=0;
	printf("Enter first number: ");
	scanf("%f",&a);
	
	printf("Enter second number: ");
	scanf("%f",&b);
	
	sum = a+b;
	
	printf("Sum of %f and %f is %f",a,b,sum);
	
	return 0;
}
