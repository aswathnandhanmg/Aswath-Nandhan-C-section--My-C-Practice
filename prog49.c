#include<stdio.h>
int add(int a, int b){
    printf("%d\n",a+b);}
int subtract(int x,int y){
    printf("%d\n",x-y);}
int equal(int c, int d){
    printf("%d\n",c==d);}
int main()
{
int a,b;
scanf("%d%d",&a,&b);
add(a,b);
subtract(a,b);
equal(a,b);
return 0;
}
