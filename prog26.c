#include<stdio.h>
int main()
{
 int bill,discount,final;
 scanf("%d%d",&bill,&discount);
 final=bill-(bill * discount/100);
 printf("%d",final);
 return 0;
 }
