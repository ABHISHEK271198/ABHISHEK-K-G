#include<stdio.h>
int condition(int x)
{
int y;
x=5;
y=(++x)+(++x)+(++x);
return y;
}
int main()
{
int j,i=5;
j=condition(i);
printf("value of j=%d",j);
return 0;
}

