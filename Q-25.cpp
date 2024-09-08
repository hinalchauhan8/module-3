//Accept 5 expense from user and find average of expense
#include <stdio.h>
int main() {
    float expense, totalExpense = 0, averageExpense;
    int count = 5;

    for (int i = 1; i <= count; i++) 
	{
        printf("Enter expense %d: ", i);
        scanf("%f", &expense);
        totalExpense += expense; 
    }

    averageExpense = totalExpense / count;

    printf("\nTotal Expense: %.2f\n", totalExpense);
    printf("Average Expense: %.2f\n", averageExpense);

    return 0;
}

