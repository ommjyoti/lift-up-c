#include<stdio.h>
int main()
{
    int x,y;
    char a;
    printf("Enter any two numbers:");
    scanf("%d %d",&x,&y);
    printf("Enter your operation:");
    scanf(" %c",&a);
    switch(a)
{
    case '+':
        printf("sum of two numbers:%d\n",x+y);
        break;
    case '-':
        printf("substraction of two numbers:%d\n",x-y);
        break;
    case '*':
        printf("multiplication of two numbers:%d\n",x*y);
        break;
    case '/':
        printf("division of two numbers:%d\n",x/y);
        break;
    case '%':
        printf("remainder of two numbers:%d\n",x%y);
        break;
    default:
        printf("please try again\n");
}
return 0;
}