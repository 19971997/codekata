#include<iostream>
using namespace std;
int main()
{
  int a,i,n,sum=0;
  cout<<"Enter the value:\n";
  cin>>a;
  i=a;
  while(i!=0)
  {
    n=i%10;
    sum=(sum*10)+n;
    i=i/10;
  }
  if(sum==a)
  {
    cout<<"YES
