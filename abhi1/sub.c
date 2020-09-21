#include<stdio.h>
int sub(int x, int y)
{
int sub;
sub=x-y;
return sub;
}
int main()
{
int a,b,c;
printf("enter first number\n");
scanf("%d",&a);
printf("enter second number\n");
scanf("%d",&b);
c=sub(a,b);
printf("sub of a=%d and b= %d is %d\n",a,b,c);
return 0;
}
