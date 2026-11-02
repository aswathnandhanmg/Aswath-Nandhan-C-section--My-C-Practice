#include<stdio.h>
int main()
{
int n;float avg=0,sum=0;
scanf("%d",&n);
int arr[n];
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
    }
avg=sum/n;
printf("%.2f",avg);
return 0;
}
