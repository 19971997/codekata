#include<stdio.h>
int main()
{
int i,n,k,sum=0,a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
printf("Enter the n value:\n");
scanf("%d",&n);
for(i=1;i<n;i++)
{
printf("%d\n",a[i]);
}
printf("Enter the K value :\n");
scanf("%d",&k);
for(i=1;i<k;i++)
{
sum=sum+a[i];
}
printf("Sum=%d",sum);
}
