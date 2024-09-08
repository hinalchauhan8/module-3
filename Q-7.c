//find area of Rectangle Formula
#include <stdio.h>
int main() 
{
    float width, length, area;

    printf("\n Enter the width of the rectangle: ");
    scanf("%f", &width);

    printf("\n Enter the length of the rectangle: ");
    scanf("%f", &length);

    area = width * length;
    printf("\n The area of the rectangle is: %.2f\n", area);

    return 0;
}

