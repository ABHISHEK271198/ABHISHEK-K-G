#include<stdio.h>
int main()
{
int rev=0,n,rem;
printf("enter the number\n");
scanf("%d",&n);
while(n!=0)
{
	rem=n%10;
	rev=rev*10+rem;
	n/=10;
}	
printf("rev num is %d\n",rev);
return 0;
}

