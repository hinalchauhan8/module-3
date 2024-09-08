//Accept 2 numbers and find out its sum check it size
#include<stdio.h>
int main()
{
	int num1,num2,sum;
	
	printf("\nEnter first number = ");
	scanf("%d",&num1);
	printf("\nEnter second number = ");
	scanf("%d",&num2);
	
	sum = num1 + num2;
	
	printf("\nSum of %d and %d is:%d\n",num1,num2,sum);
	printf("\nSize of the sum in bytes: %zu bytes\n",sizeof(sum));
	return 0;
}
