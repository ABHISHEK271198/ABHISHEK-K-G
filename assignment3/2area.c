#include<stdio.h>
#define PI 3.14
#define AREA (PI*r*r)
#define PERIMETER (2*PI*r)
#define VOLUME (PI*r*r*h)
int main()
{
int r,h,area,perimeter,volume;
printf("enter radius");
scanf("%d",&r);
printf("enter height");
scanf("%d",&h);
area=AREA;
perimeter=PERIMETER;
printf("area and perimeter of circle is %d and %d\n",area,perimeter);
volume=VOLUME;
printf("volume is %d\n",volume);
return 0;
}
