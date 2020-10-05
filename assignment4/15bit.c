#include<stdio.h>
int bit(int x)
{
int y;
y=((~7&0x000f)==8);
return y;
}
int main()
{
int condition,bitwise;
bitwise=bit(condition);
printf("bitwise=%x",bitwise);
return 0;
}

