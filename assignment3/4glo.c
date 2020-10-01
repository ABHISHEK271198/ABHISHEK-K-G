#include<stdio.h>
int a=1;
int b=2;
int c=3;
int d;
int e;
int f;
int avg;
int add()
{
d=a+b+c;
}
int div()
{
e=d/3;
}
int main()
{
f=add(a,b,c);
avg=div(d);
printf("average of %d %d %d is %d",a,b,c,div(d));
return 0;
}


