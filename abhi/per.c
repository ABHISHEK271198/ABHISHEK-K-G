#include<stdio.h>
int main()
{
int a,b,c,d,e;
float f,s,per;
a=47;
b=38;
c=42;
d=49;
e=41;
s=250;
f=a+b+c+d+e;
per=(f/s)*100;
printf("total marks %d %d %d %d %d is %f\n",a,b,c,d,e,f);
printf("total percentage of class %f and %f is %f\n",f,s,per);
return 0;
}
