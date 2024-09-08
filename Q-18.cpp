//Calculate person’s Annual salary
#include<stdio.h>
int main()
{
	float monthlySalary, annualSalary;
	printf("\nEnter the monthlySalary Salary = ");
	scanf("%f", &monthlySalary);

    annualSalary = monthlySalary * 12;

    printf("\nThe annual salary is: %.2f\n", annualSalary);
	return 0;
}
