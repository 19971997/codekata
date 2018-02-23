#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("Enter the num:");
scanf("%d",&n);
if(n>0)
{
printf("The entered num is positive");
}
else if(n<0)
{
printf("The entered num is negative");
}
else if(n==0)
{
printf("The entered num is equal to 0");
}
else
{
printf("Invalid");
}
return 0;
}
