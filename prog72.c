//Write a C program to display the elements of an array in reverse order.
#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n];
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);}
for (int i=0,j=n-1;i<n;i++,j--){
    printf("%d ",arr[j]);
    }
return 0;
}
