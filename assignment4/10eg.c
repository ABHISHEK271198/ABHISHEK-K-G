#include<stdio.h>
int condition(int x,int y,int z)
{
x=2,y=7,z=10;
z=x==y;
return z;
}
int main()
{
int a,b,c;
c=condition(a,b,c);
printf(c="%d",c);
return 0;
}
