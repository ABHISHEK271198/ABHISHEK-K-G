#include<stdio.h>
int value(int z)
{
int y=0;
y=(z==y&&(y|=10));
return y;
}
int main()
{
int a,z;
z=value(a);
printf("value of z=%d",z);
return 0;
}
