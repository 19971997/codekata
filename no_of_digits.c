#include<stdio.h>
int main(void)
{
int n,n1,count=0;
printf("Enter the Integer:\n")
scanf("%d",&n);
while(n!=0)
{
n1=n%10;
count++;
n=n/10;
}
printf("No of Digits=%d",count);
}
