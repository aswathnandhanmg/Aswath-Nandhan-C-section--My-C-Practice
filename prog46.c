//Write a C program using a do-while loop to print numbers from 1 to n
#include<stdio.h>
int main()
{
int n,i=0;
scanf("%d",&n);
do {
  printf("%d",n);
  i++;
  } while (i<n);
return 0;
}
