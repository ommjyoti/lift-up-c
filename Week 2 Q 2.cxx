//Question 2//
#include<stdio.h>
int main()
{
	int n,es=0,eps=0,s=0;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array :");
	for (s;s<n;s++)
	{
		scanf("%d",&a[s]);
		if(a[s]%2==0){es+=a[s];}
		if(s%2==0){eps+=a[s];}
	}
	printf("Sum of even elements = %d \nSum of even position elements = %d",es,eps);
	return 0;
}