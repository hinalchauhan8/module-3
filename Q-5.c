//find  area of cube formula  
#include<stdio.h>
int main()
{
	
	float side,area;
	
	printf("\nEnter the side length of the cube = ");
	scanf("%f",&side);
	
	area = 6*side*side;
	
	printf("\nArea of the cube is:%2f\n",area);
	return 0;
}
