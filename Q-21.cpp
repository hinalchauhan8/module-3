//Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable

//swaping two numbers using a third variable
#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("\nEnter two numbers = ");
	scanf("%d %d",&a,&b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("\nAfter swapping = a - %d, b - %d\n",a,b); 
	
	//swapping two numbers without using a third variable
    printf("\nEnter two numbers = ");
	scanf("%d %d",&a,&b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("\nAfter swapping = a - %d, b - %d\n",a,b);
	return 0;

}


