#include<stdio.h>
int mul(int x,int y,int z,int n,int r)
{
int mul;
mul=1.33*3.14*r*r*r;
return mul;
}
int main()
{
int v,r;
printf("enter radius of sphere\n");
scanf("%d",&r);
v=mul(1.33,3.14,r,r,r);
printf("volume of sphere r=%d is %d\n",r,v);

return 0;
}
