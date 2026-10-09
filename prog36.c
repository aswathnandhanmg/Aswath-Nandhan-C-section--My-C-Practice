#include<stdio.h>
int main()
{
int num1,num2,num3;
scanf("%d%d%d",&num1,&num2,&num3);
if (num1>num2&&num3) {
   printf("first number greatest ");}
else if (num2>num1&&num3){
   printf("second number greatest ");}
else if (num3>num1&&num2){
   printf("third number greatest ");}
else if (num1==num2==num3){
   printf("The numbers are equal ");}
return 0;
}
