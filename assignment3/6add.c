#include<stdio.h>
extern int a;
extern int b;
extern int sum;
extern int add();
int main()
{
sum=add();	
printf("%d %d is %d",a,b,sum);
return 0;
}
