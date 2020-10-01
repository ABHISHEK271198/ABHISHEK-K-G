#include<stdio.h>
int sub(int x,int y)
{
int z;
z=x-y;
return z;
}
int main()
{
int a,b,c;
printf("enter a value");
scanf("%d",&a);
printf("enter b value");
scanf("%d",&b);
c=sub(a,b);
printf("sub of %d %d is %d",a,b,c);
return 0;
}
