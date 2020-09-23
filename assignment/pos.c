#include<stdio.h>
int positive(int n)
{
int positive;
positive=(n>0);
return positive;
}
int main()
{
int n,a;
a=positive(n);
printf("enter a number is \n");
scanf("%d",&n);
if(positive(n))
{
printf("number is positive");
}
else
{
printf("number is negetive");
}
return 0;
}
