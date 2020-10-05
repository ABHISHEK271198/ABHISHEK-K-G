#include<stdio.h>
float condition(float x,float y)
{
float z;
x=2.5,y=2;
z=y/2+y*4/y-y+x/3;
return z;
}
int main()
{
float i,a,g;
g=condition(i,a);
printf("g=%f",g);
return 0;
}


