//Find ascii value of given number
#include<stdio.h>
int main()
{
	char character;
	
	printf("\nEnter a digit (0-9): ");
	scanf("%c",&character);
	
	if(character)
	{
		printf("\nThe ASCII value of '%c' is: %d\n",character,character);
	}
	else
	{
		printf("Error: You did not enter a digit. Please enter a number between 0-9.\n");
	}
	return 0;
}
