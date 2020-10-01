#include<stdio.h>
#define PI 3.14
int main()
{
float r,h,area,perimeter,volume;
printf("enter the radius");
scanf("%f",&r);
printf("enter height");
scanf("%f",&h);
area=(PI*r*r);
perimeter=(2*PI*r);
volume=(PI*r*r*h);
printf("area=%f",area);
printf("perimeter=%f",perimeter);
printf("volume=%f",volume);
return 0;
}
