//Question 4//
#include<stdio.h>
int main()
{
	int n,s=0,b,c;
	printf("Enter length of array : ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter elements of the array : ");
	for(s;s<n;s++){scanf("%d",&a[s]);}
	b=a[0];
	c=b;
	for(s=1;s<n;s++)
	{
		if(a[s]>b){b=a[s];}
		else if (a[s]<=c){c=a[s];}
	}
	printf("\nThe largest number  is %d\nThe smallest number is %d",b,c);
	return 0;
}