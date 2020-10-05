#include<stdio.h>
float condition(float x,float y,float z)
{
float s;
x=4,y=1,z=3;
s=x*y/2+3/2*y+2+z;
return s;
}
int main()
{
float o,i,a,t;
o=condition(i,a,t);
printf("o=%f",o);
return 0;
}
