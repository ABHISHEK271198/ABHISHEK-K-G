#include<stdio.h>
int main()
{
	int num,n,sum=0,rem;
	printf("enter a number");
	scanf("%d",&num);
	n=num;
	while (num!=0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}	
if(n==sum)
{
printf("\n%d is an armstrong number",n);
}else
{
printf("\n%d is not armstrong number",n);
}
return 0;
}
