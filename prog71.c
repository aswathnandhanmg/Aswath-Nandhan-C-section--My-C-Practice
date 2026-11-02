//Write a C program to copy the elements of one array into another array
#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n];
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);}
int a[n];
for (int i=0;i<n;i++){
    a[i]=arr[i];
    }
for (int i=0;i<n;i++){
    printf("%d ",a[i]);
    }
return 0;
}
