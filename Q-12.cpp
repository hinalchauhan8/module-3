/*Accept number of students from user. I need to give 5 apples to each
student. How many apples are required*/
#include<stdio.h>
int main()
{
	int students,apples;
	
	printf("\nEnter the number of students = ");
	scanf("%d",&students);
	
	apples = students * 5;
	printf("\nThe total number of apples required is: %d\n",apples);
	return 0;
}
