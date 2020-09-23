#include<stdio.h>
int leap(int x,int y)
{
int leap;
leap=(x%4==0);
return leap;
}
int main()
{
int x,y,a;
y=4;
printf("enter year");
scanf("%d",&x);
a=leap(x,y);
if(leap(x,y))
{
printf("leap year");
}
else
{
printf("not leap year");
}return 0;
}
