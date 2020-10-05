#include<stdio.h>
#define MAX(a,b) (a>b?a:b) 
int main()
{
int a,b,max,min,greater;
printf("enter a value");
scanf("%d",&a);
printf("enter b value");
scanf("%d",&b);
greater=MAX(a,b);
printf("maximum value is=%d",greater);
return 0;
}
