//Convert minutes into seconds and hours
#include <stdio.h>
int main() 
{
    int minutes, seconds;
    float hours;

    printf("\nEnter the number of minutes: ");
    scanf("%d", &minutes);

    seconds = minutes * 60; 
    hours = minutes / 60.0; 

    printf("%d minutes is equal to %d seconds and %.2f hours.\n", minutes, seconds, hours);
    return 0;
}

