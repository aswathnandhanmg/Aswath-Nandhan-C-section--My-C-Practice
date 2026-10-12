//Write a C program to print the multiplication tables from 1 to 5
#include<stdio.h>
int main()
{
 int n=1,i;
 while (n<=5){
     i=0;
     while (i<=15){
       printf("%dX%d=%d\n",n,i,n*i);
       i++;
     }
     printf("\n");
     n++;
}
return 0;
}
