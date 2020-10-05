#include<stdio.h>
int vowel(int x)
{
int y;
y=(x=='a'||x=='e'||x=='i'||x=='o'||x=='u');
return y;
}
int main()
{
char ch;
printf("enter any alphabet");
scanf("%s",&ch);
if(vowel(ch))
{
printf("alphabet is vowel");
}
else
{
printf("alphabet is consonant");
}
return 0;
}
