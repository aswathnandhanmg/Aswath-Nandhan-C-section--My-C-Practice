#include<stdio.h>
int main()
{
 int a=10,b=3,c=1;
 printf("%d",a*(b+2));
 return 0;
 }
 //though the * has more precedence than +,since () has highest precedence compiler first compiles + operator inside ().
