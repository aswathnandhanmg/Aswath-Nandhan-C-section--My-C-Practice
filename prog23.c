#include<stdio.h>
int main()
{
 int principal,rate,time;
 int value;
 scanf("%d %d %d",&principal,&rate,&time);
 printf("%d",principal * time * rate/100);
 return 0; 
 }
