//Find circumference of Rectangle formula 
#include<stdio.h>
int main()
{
	
	float width,length,circumference;
	
	printf("\nEnter the width of the rectangle = ");
	scanf("%f",&width);
	
	printf("\nEnter the length of the rectangle = ");
	scanf("%f",&length);
	
	circumference = 2 * (width + length);
	
	printf("\nThe circumference of the rectangle is: %.2f\n",circumference);
	return 0;
}
