#include<stdio.h>
int main()
{ 
 printf("Enter your number:");
 int a,b;
 scanf("%d%d",&a,&b);
 printf("%d\n",a);
 printf("%d\n",b);
 float c,d;
 printf("Enter your decimal: ");
 scanf("%f%f",&c,&d);
 printf("%f\n",c);
 printf("%f\n",d);
 return 0;
 }
 //We can avoid space between the two data format (%f or %d) it will result in one number then next line next number 
