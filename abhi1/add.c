#include<stdio.h>
int sum (int a,int b)
{
int sum;
sum=(a+b);
return sum;
}
int main()
{
int a,b,c;
printf("enter first number\n");
scanf("%d",&a);
printf("enter second number\n");
scanf("%d",&b);
c=sum(a,b);
printf("sum of a=%d and b=%d is %d\n",a,b,c);
return 0;
}
