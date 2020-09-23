#include<stdio.h>
int add(int a,int b,int c,int d)
{
int add;
add=a+b+c+d;
return add;
}
int main()
{
int a,b,c,d,e;
printf("enter a value");
scanf("%d",&a);
printf("enter b value");
scanf("%d",&b);
printf("enter c value");
scanf("%d",&c);
printf("enter d value");
scanf("%d",&d);
e=add(a,b,c,d);
printf("sum of digital number is a=%d b=%d c=%d d=%d is %d\n",a,b,c,d,e);
return 0;
}
