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
else
{
printf("The entered num is equal to 0");
}
return 0;
}
