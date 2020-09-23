#include<stdio.h>
int main()
{
int i,n0,rem=0;
printf("enter a number\n");
scanf("%d",&n0);
for(i=1;i<=n0;++i)
{
if(n0%i==rem)
{
printf("not prime number\n");
}
if(n0%i!=rem)
{
printf("prime number\n");
}}
return 0;
}

