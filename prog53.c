#include<stdio.h>
int main()
{
char ch;
int count=0;
scanf("%c",&ch);
for (;ch!='\n';){
    if ((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
       if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
     count++;
     scanf("%c",&ch);
     }
     }}
printf("No. of vowels: %d",count);
return 0;
}
    
