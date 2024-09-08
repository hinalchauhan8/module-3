//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
int main()
{
	int n,n1,n2,n3;
	
	printf("\nEnter an integer = ");
	scanf("%d",&n);
	
	n1 = n;
	n2 = n * n;
	n3 = n * n * n;
	
	printf("\nN^1 = %d\n", n1);
	printf("\nN^2 = %d\n", n2);
	printf("\nN^3 = %d\n", n3);
	
	return 0;
}
