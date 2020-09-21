#include<stdio.h>
int mul(int x, int y)
{
int mul;
mul=x*y;
return mul;
}
int main()
{
int a,b,c;
printf("enter first number\n");
scanf("%d",&a);
printf("enter second number\n");
scanf("%d",&b);
c=mul(a,b);
printf("mul of a=%d and b=%d is %d\n",a,b,c);
return 0;
}
