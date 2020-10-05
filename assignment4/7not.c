#include<stdio.h>
int complement( int x)
{
int y;
y=~x;
return y;
}
int main()
{
int c,a;
printf("enter any value");
scanf("%x",&a);
c=complement(a);
printf("complement of a is =%x",c);
return 0;
}
