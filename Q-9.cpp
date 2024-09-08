//Find circumference of Triangle formula : triangle 
#include<stdio.h>
int main()
{
	
	float a,b,c,perimeter;
	printf("\nEnter the lengths of the sides of the triangle:\n");
	printf("Side a = ");
	scanf("%f",&a);
	printf("Side b = ");
	scanf("%f",&b);
	printf("Side c = ");
	scanf("%f",&c);
	
	perimeter = a + b + c;
	printf("\nThe perimeter of the triangle is: %.2f",perimeter); 
	
	return 0;
}
