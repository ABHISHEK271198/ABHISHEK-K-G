#include<stdio.h>
int or(int x,int y)
{
int condition;
condition=(x>4 || y>5);

return condition;
}
int main()
{
int a,b;
printf("enter a value");
scanf("%d",&a);
printf("enter b value");
scanf("%d",&b);
if(or(a,b))
{
printf("condition true");
}
else
{
printf("condition false");
}
return 0;
}
