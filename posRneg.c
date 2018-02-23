#include<stdio.h>
#include<conio.h>
int main()
{
  int n;
  printf("Enter the number:");
  scanf("%d",&n);
  if(n>0)
  {
    printf("The number is POSITIVE");
  }
  else if(n<0)
  {
    printf("The number is NEGATIVE");
  }
  else if(n==0)
  {
    printf("The number is ZERO");
  }
  else
  {
    printf("Invalid");
  }
  return 0;
}
