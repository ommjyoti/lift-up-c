//Question 3//
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int c=0,b=0,s=0;
	printf("Enter the string : ");
	scanf("%[^\n]",&a);
	for(s;s<strlen(a);s++)
	{
		if ((a[s]>='a' && a[s]<='z') || (a[s]>='A' && a[s]<='Z'))
		{
			if(b!=1){b=2;}
		}
		else
		{
			if(b==2){c+=1;b=0;}
		}
	}
	printf("%d",c+1);
	return 0;
}