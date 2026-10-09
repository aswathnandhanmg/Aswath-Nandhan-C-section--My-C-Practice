//Write a C program to calculate the factorial of a given number.
#include<stdio.h>
int main()
{
int n,i,fact=1;
scanf("%d",&n);
i=n;
while (i>=1){
    fact*=i;
    i--;}
printf("%d\n",fact);
return 0;
}
