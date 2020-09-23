#include<stdio.h>
int div(int x)
{
int div;
div=(x%2==0);
return div;
}
int main()
{
int a;
printf("enter a number\n");
scanf("%d",&a);
if(div(a))
{
printf("number is even");
}
else
{
printf("number is odd");
}return 0;
}

