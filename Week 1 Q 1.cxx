#include<stdio.h>
int main()
{
    int x,y;
    char a;
    printf("Enter any two numbers:");
    scanf("%d %d",&x,&y);
    
    printf("sum of two numbers:%d\n",x+y);
    printf("substraction of two numbers:%d\n",x-y);
    printf("multiplication of two numbers:%d\n",x*y);
    if(y==0){printf("Error : o in denominator\n");}
    else{
        printf("division of two numbers:%d\n",x/y);
    }
    printf("remainder of two numbers:%d\n",x%y);
return 0;
}
