/* make Simple calculator  (addition, subtraction,
multiplication, division and modulo)*/

#include<stdio.h>
int main()
{
	int num1,num2,ans;
	//addition
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	
	ans = num1+num2;
	printf("\naddition of %d and %d is %d\n", num1,num2,ans);
	
	//subtaction 
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	
	printf("\nEnter the value of num2 =");
	scanf("%d",&num2);
	
	ans = num1-num2;
	printf("\n subtraction of %d and %d is %d", num1,num2,ans);
	
	//multiplication
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	
	printf("\nEnter the value of num2 =");
	scanf("%d",&num2);
	
	ans = num1-num2;
	printf("\n Multiplication of %d and %d is %d", num1,num2,ans);
	
	//division
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	
	printf("\nEnter the value of num2 =");
	scanf("%d",&num2);
	
	ans = num1-num2;
	printf("\n Division of %d and %d is %d", num1,num2,ans);
	
	//remainder
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	
	printf("\nEnter the value of num2 =");
	scanf("%d",&num2);
	
	ans = num1-num2;
	printf("\n Remainder of %d and %d is %d", num1,num2,ans);
	
	
	
	return 0;
	
}
