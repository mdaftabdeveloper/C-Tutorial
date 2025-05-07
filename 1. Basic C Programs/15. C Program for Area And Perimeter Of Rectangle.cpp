#include<stdio.h>
int main()
{
	float l,b;
	printf("Enter length of the rectange: ");
	scanf("%f",&l);
	
	printf("\nEnter breadth of the reactangle: ");
	scanf("%f",&b);
	
	float area = l*b;
	float perimeter = 2*(l+b);
	
	printf("Area of the rectangle is %f meter square and perimeter is %f meter",area,perimeter);
	return 0;
	
	
}
