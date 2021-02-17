//Question 1//
#include<stdio.h>
int main()
{
	int a,counter=0;
	printf("Enter the number : ");
	scanf("%d",&a);
	for (a;a>9;a=a/10)
	{
		counter+=a%10;
	}
	counter+=a;
	printf("Sum of digits is : %d",counter);
	return 0;
}