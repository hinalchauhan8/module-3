//find the area of a rectangular prism formula 
#include<stdio.h>
int main()
{
	
	float height,width,length,area; 
	
	printf("\nEnter the height of the rectangular prism = ");
	scanf("%f",&height);
	printf("\nEnter the width of the rectangular prism = ");
	scanf("%f",&width);
	printf("\nEnter the length of the rectangular prism = ");
	scanf("%f",&length);
	
	area = 2 * (width * length + height * length + height * width);
	
	printf("\nThe surface area of the rectangular prism is: %.2f\n",area);
	return 0; 
}
