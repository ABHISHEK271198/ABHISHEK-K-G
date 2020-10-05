#include<stdio.h>
int firstshift(int a)
{
int first;
first=a>>1;
return first;
}
int secondshift(int b)
{
int second;
second=b>>2;
return second;
}
int thirdshift(int c)
{
int third;
third=c>>3;
return third;
}
int fourthshift(int d)
{
int fourth;
fourth=d>>4;
return fourth;
}
int main()
{
int num,one,two,three,four;
printf("enter any value");
scanf("%x",&num);
one=firstshift(num);
printf("one shift=%x\n",one);
two=secondshift(num);
printf("two shift=%x\n",two);
three=thirdshift(num);
printf("three shift=%x\n",three);
four=fourthshift(num);
printf("four shift=%x\n",four);
return 0;
}


