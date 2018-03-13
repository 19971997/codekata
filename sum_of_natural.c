#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("Enter the value of N : \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("Sum of the natural number is :%d",sum);
}
