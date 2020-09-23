#include<stdio.h>
int large(int a,int b,int c)
{
int large;
large=(a>b && a>c);
return large;
}
int large1(int a,int b,int c)
{	
int large1;
large1=(b>a && b>c);
return large1;
}
int large2(int a,int b,int c)
{
int large2;
large2=(c>a && c>b);
return large2;
}
int main()
{
int a,b,c,e,f,g;
printf("enter a value\n");
scanf("%d",&a);
printf("enter b value\n");
scanf("%d",&b);
printf("enter c value\n");
scanf("%d",&c);
e=large(a,b,c);
f=large1(a,b,c);
g=large2(a,b,c);
//if(a>b && a>c)
if(e)
{
printf("a is larger");
}
//if(b>a && b>c)
if(f)
{
printf("b is larger");
}
//if(c>a && c>b)
if(g)
{
printf("c is larger");
}
return 0;
}



