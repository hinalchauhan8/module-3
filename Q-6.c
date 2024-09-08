//find area of triangle formula
#include<stdio.h>
int main()
{
	float base,area,height;
	
	printf("\n Enter the base of the triangle = ");
	scanf("%f",&base);
	
	printf("\n Enter the height of the triangle = ");
	scanf("%f",&height);
	
	area = 0.5 * base * height;
	printf("\n The area of the triangle is: %.2f\n",area);
	
	return 0;
}
