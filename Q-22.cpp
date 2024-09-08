/*calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/

#include <stdio.h>
#include <math.h> 

int main() {
    double principal, rate, time, amount, compoundInterest;

    printf("\nEnter the principal amount (P): ");
    scanf("%lf", &principal);

    printf("\nEnter the annual interest rate (R in %%): ");
    scanf("%lf", &rate);

    printf("\nEnter the time period (t in years): ");
    scanf("%lf", &time);

    amount = principal * pow((1 + rate / 100), time);

    compoundInterest = amount - principal;

    printf("\nAmount after %.2lf years = %.2lf\n", time, amount);
    printf("Compound Interest = %.2lf\n", compoundInterest);

    return 0;
}

