#include<stdio.h>
int add(int x,int y)
{
int add;
add=x+y;
return add;
}
int sub(int x,int y)
{
int sub;
sub=x-y;
return sub;
}
int div(int x,int y)
{		
int div;
div=x/y;
return div;
}
int mul(int x,int y)
{
int mul;	
mul=x*y;
return mul;
}
int main()
{
int a,b,c,d,x,y;
printf("enter x value");
scanf("%d",&x);
printf("enter y value");
scanf("%d",&y);
a=add(x,y);
b=sub(x,y);
c=div(x,y);
d=mul(x,y);
printf("all value is  a=%d b=%d c=%d d=%d\n",a,b,c,d);
return 0;
}

