#include<stdio.h>
int right(int num)
{
int a;
a=num>>2;
return a;
}
int main()
{
int shift,num;//=0X45fe6a92;	
printf("enter num");
scanf("%x",&num);
shift=right(num);
printf("right shift answer is=%x",shift);
return 0;
}
	
