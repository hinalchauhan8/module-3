/*Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary*/
#include <stdio.h>
int main() 
{
    float monthlySalary, insurance, loan, remainingSalary;

    printf("Enter your monthly salary = ");
    scanf("%f", &monthlySalary);

    insurance = 0.10 * monthlySalary;
    loan = 0.10 * monthlySalary;

    remainingSalary = monthlySalary - (insurance + loan);

    printf("Insurance premium deducted: %.2f\n", insurance);
    printf("Loan installment deducted: %.2f\n", loan);
    printf("Remaining salary after deductions: %.2f\n", remainingSalary);

    return 0;
}


