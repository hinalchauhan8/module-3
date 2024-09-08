//Convert kilometers into meters
#include<stdio.h>
void kilometersToMeters()
{
	float kilometers, meters;
	
	printf("\nEnter distance in kilometers = ");
	scanf("%f",&kilometers);
	
	meters = kilometers * 1000;
	
	printf("\n%.2f kilometers is equal to %.2f meters\n",kilometers, meters);
}
int main()
{
	kilometersToMeters();
	return 0;
}
