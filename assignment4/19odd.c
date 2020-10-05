#include<stdio.h>
int condition(int n)
{
int x;
x=(n%2==0 & 1);
return x;
}
int main()
{
int num,a;
printf("enter a number");
scanf("%d",&num);
a=condition(num);
if(a)
{
printf("number is even");
}
else
{
printf("number is odd");
}
return 0;
}
