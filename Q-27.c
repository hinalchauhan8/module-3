//Convert days into months
#include<stdio.h>
int main()
{
	int days;
	float months;
	
	printf("\nEnter the number of days = ");
	scanf("%d",&days);
	
	months = days / 30.44;
	
	printf("\n %d days is approximantely %.2f months\n",days,months);
	return 0;
}
