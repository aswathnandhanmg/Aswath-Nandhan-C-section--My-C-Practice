#include<stdio.h>
int main()
{
 int new,old,final1,final2;
 scanf("%d%d",&old,&new);
 final1 = (new-old)/100;
 final2 = (new-old)%100;
 printf("%d.%d",final1,final2);
 return 0;
 }
