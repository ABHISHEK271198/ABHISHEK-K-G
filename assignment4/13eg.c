#include<stdio.h>
int condition(int x,int y)
{
float z;
x=4,y=3;
z=1/3*x/4-6/2+2/3*6/y;
return z;
}
int main()
{
float s,a,g;
s=condition(a,g);
printf("value of s=%f",s);
return 0;
}
