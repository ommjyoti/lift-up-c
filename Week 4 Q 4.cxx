#include<stdio.h>
int main()
{
	float p,ch,b,m,c,t;
	printf("Enter marks of physics , chemistry , biology , math's and computer respectively :");
	scanf("%f %f %f %f %f",&p,&ch,&b,&m,&c);
	t=(p+ch+b+m+c)/5;
	printf("%f %% \n",t);
	if (t>=90)
	{
		printf("Grade A");
	}
	else if (t>=80)
	{
		printf("Grade B");
	}
	else if (t>=60)
	{
		printf("Grade C");
	}
	else if (t>=60)
	{
		printf("Grade D");
	}
	else if (t>=40)
	{
		printf("Grade E");
	}
	else
	{printf("Grade F");
	}
	return 0;
}