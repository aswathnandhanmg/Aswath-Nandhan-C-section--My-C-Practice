#include<stdio.h>
int main()
{
 int a=1,b=2,c=3,d=3;
 printf("%d\n",a*b+c/d);//2+1(*,/ has greater precedence 
 return 0;            // than +)
 }
