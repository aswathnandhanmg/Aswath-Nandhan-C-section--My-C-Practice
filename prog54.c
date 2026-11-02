#include<stdio.h>
int largest_three( int a, int b, int c) {
    if (a>=b&&a>c){
       printf("%d is greatest\n",a);
       }
    else if (b>a&&b>=c){
         printf("%d is greatest\n",b);}
    else {
       printf("%d is greatest\n",c);}
}
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
largest_three(a,b,c);
largest_three(c,a,b);
return 0;
}
    
