#include<stdio.h>
int add (int a,int b,int c,int d)
{
int add;
add=a+b+c+d;
return add;
}
int main()
{
int a,b1,b2,b3,b4;
printf("enter first number\n");
scanf("%d",&b1);
printf("enter second number\n");
scanf("%d",&b2);
printf("enter 3rd number\n");
scanf("%d",&b3);
printf("enter 4th number\n");
scanf("%d",&b4);
a=add(b1,b2,b3,b4);
printf("sum of all digits is b1=%d b2=%d b3=%d b4=%d is %d\n",b1,b2,b3,b4,a);
return 0;
}	
