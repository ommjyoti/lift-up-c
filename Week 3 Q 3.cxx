#include<stdio.h>
int main()
{
	float a;
	printf("Enter radius of the circle:");
	scanf("%f", &a);
	printf("\n Diameter=%f \n Circumference=%f \n Area=%f",(2*a),(2*a*3.141159),(3.141159*a*a));
	return 0;
}