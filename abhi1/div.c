#include<stdio.h>
int div(int x,int y)
{
int div;
div=x/y;
return div;
}
int main()
{	
int a,b,c;
printf("enter first number\n");
scanf("%d",&a);
printf("enter second number\n");
scanf("%d",&b);
c=div(a,b);
printf("div of a=%d and b=%d is %d\n",a,b,c);
return 0;
}
