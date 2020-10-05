#include<stdio.h>
int and(int x,int y)
{
int condition;
condition=(x>5 && y>3);
return condition;
}
int main()
{
int a,b;
printf("enter a value");
scanf("%d",&a);
printf("enter b value");
scanf("%d",&b);
if(and(a,b))
{
printf("condition true");
}
else
{
printf("condition false");
}
return 0;
}
