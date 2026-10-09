#include<stdio.h>
int main()
{
 printf("Enter a character: ");
 char a;
 scanf("%c",&a);
 printf("%c\n",a);
 printf("Enter a name:");
 char name[30];
 scanf("%[^\n]",name);
 printf("%s",name);
 return 0;
 }

