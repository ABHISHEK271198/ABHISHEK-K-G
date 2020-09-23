#include<stdio.h>
int div(int x)
{
int div;
div=(x%5==0);
return div;
}
int main()
{
int a,b;
printf("enter a number\n");
scanf("%d",&a);
if(div(a))
{
printf("divisible by 5\n");
}
else
{
printf("not divisible by 5\n");
}
return 0;
}

