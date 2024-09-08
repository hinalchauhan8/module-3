//Calculate person’s insurance premium based on salary
#include <stdio.h>

float calculate_premium(float salary) 
{
    float premium;

    if (salary < 20000) //Flat premium for salary less than 20,000
	{
        premium = 1000;  
    } 
	else if (salary >= 20000 && salary < 50000) 
	{
        premium = 2500;  // Flat premium for salary between 20,000 and $50,000
    } 
	else 
	{
        premium = 4000;  // Flat premium for salary 50,000 and above
    }

    return premium;
}
int main() {
    float salary, premium;

    printf("Enter the person's salary: ");
    scanf("%f", &salary);

    premium = calculate_premium(salary);

    printf("The insurance premium is: %.2f\n", premium);

    return 0;
}


