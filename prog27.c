#include<stdio.h>
int main()
{
 int bonus,sal,final;
 scanf("%d%d",&sal,&bonus);
 final=sal+(sal * bonus/100);
 printf("%d\n",final);
 return 0;
 }
