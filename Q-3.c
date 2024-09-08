//Find Area And Circumference of Circle
#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area, circumference;

    
    printf("\n Enter the radius of the circle: ");
    scanf("%f", &radius);

    
    area = PI * radius * radius;

    
    circumference = 2 * PI * radius;


    printf("\n Area of the circle: %.2f\n", area);
    printf("\n Circumference of the circle: %.2f\n", circumference);

    return 0;
}

