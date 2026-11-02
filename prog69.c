#include<stdio.h>
int main()
{
int n;scanf("%d",&n);
int arr[n],count=0;
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
int ele;
printf("Enter number to be searched: ");
scanf("%d",&ele);
for (int i=0;i<n;i++){
    if (ele==arr[i]){
       printf("found at position %d\n",i);
       count++;}
       }
if (count==0){
   printf("Element not found");}
else {
   printf("%d\n",count);}
return 0;
}
       
