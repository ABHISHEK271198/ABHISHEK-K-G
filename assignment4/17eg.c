#include<stdio.h>
int condition(int x)
{
int y=2;
y=(y++)+(~++y);
return y;
}
int main()
{
int a=2;
a=condition(a);
printf("value of a=%d",a);
return 0;
}

