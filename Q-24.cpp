//Accept 5 employees name and salary and count average and total salary
#include <stdio.h>
#define EMPLOYEE_COUNT 5

int main() 
{
    char name[EMPLOYEE_COUNT][50];
    float salary[EMPLOYEE_COUNT];
    float totalSalary = 0, averageSalary;
    
    for (int i = 0; i < EMPLOYEE_COUNT; i++) {
        printf("Enter the name of employee %d: ", i + 1);
        scanf("%s", name[i]);
        printf("Enter the salary of %s: ", name[i]);
        scanf("%f", &salary[i]);
        totalSalary += salary[i];  
    }

    averageSalary = totalSalary / EMPLOYEE_COUNT;

    printf("\nTotal Salary of %d employees: %.2f\n", EMPLOYEE_COUNT, totalSalary);
    printf("Average Salary: %.2f\n", averageSalary);

    return 0;
}

