//Question 5//
#include<stdio.h>
void main()
{
	int x=5;
	int a=x,c=1;
	for(int b=0;b<x;b++)
	{
		for(int k=0;k<=x;k++)
		{
			if( k==c or k==a){printf("%c",'*');}
			else{printf("%c",' ');}
		}
		printf("\n");
		a--;c++;
	}
}