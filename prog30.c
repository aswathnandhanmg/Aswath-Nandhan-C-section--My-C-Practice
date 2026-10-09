#include<stdio.h>
int main()
{
 int a,b,div1;
 float div2;
 scanf("%d%d",&a,&b);
 div1= a/b;
 div2=(float)a/(float)b;
 printf("%d\n%.3f\n",div1,div2);//this only prints
 return 0;                      //3 decimal points
 }
