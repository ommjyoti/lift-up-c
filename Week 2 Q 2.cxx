#include<stdio.h>
int main()
{
	float a;
	printf("Enter temperature in ° C : ");
	scanf("%f",&a);
	printf("\nTemperature in ° F is %f",(a*1.8+32));
	return 0;
} 