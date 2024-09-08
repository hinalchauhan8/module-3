//calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
int main()
{
	int a,b;
	printf("\nEnter two numbers = ");
	scanf("%d %d",&a,&b);
	
	if(b == 0 || a==0)
	{
		printf("\nError - Cannot swap if either number is zero.\n");
		return 1;
	}
	
	a = a * b;
	b = a / b;
	a = a / b;
	
	printf("\nAfter swapping: a = %d, b = %d\n",a,b);
	return 0;
}
