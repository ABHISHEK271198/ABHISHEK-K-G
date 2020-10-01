#include<stdio.h>
#define SUMMER 3
#define RAINY 6
#define WINTER 9
#define SPRING 12
int main()
{
int a;
printf("enter season");
scanf("%d",&a);
if(a==3)
{
printf("summer");
}
else if(a==6)
{
printf("rainy");
}
else if(a==9)
{
printf("winter");
}
else if(a==12)
{
printf("spring");
}
return 0;
}


