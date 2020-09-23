#include<stdio.h>
int positive(int n)
{
int positive;
positive=(n>0);
return positive;
}
int negetive(int n)
{
int negetive;
negetive=(n<0);
return negetive;
}
int main()
{
int n,a,b;
a=positive(n);
b=negetive(n);
printf("enter number");
scanf("%d",&n);
if(positive(n))
{
printf("positive");
}
else if(negetive(n))
{
printf("negetive");
}
else
{
printf("zero");
}
return 0;

}

