//WAP to convert years into days and days into years
#include<stdio.h>
void convertYearsToDays()
{
int years;
int days;

printf("\nEnter number of years = ");
scanf("%d",&years);

days = years * 365;
printf("%d years is equal to %d days\n",years, days);
}

void convertDaysToYears()
{
int days;
float years;

printf("\nEnter number of days = ");
scanf("%d",&days);

years = (float)days / 365;
printf("%d is equal to %.2f years\n",days,years);
}
int main()
{
	int choice;
	printf("Choose an option = \n");
	printf("\n1. Convert years to days\n");
	printf("\n2. Convert days to years\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		    convertYearsToDays();
		    break;
		case 2:
			convertDaysToYears();
			break;
		default:
			printf("Invalid choice\n");
			break;
	}
	return 0;
}
