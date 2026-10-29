#include<stdio.h>
int factorial (int n){
    int fact=1;
    while (n>0){
        fact*=n;
        n--;
        }
    printf("%d",fact);
    }
int main()
{
int n;
scanf("%d",&n);
factorial (n);
return 0;}

