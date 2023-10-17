#include<iostream>
using namespace std;
 
int main()
{
int n,i,f=1;
cout<<"Enter number for which factorial is to be found ";
cin>>n;

for(i=1;i<=n;i++)
{
  f=f*i;
  //f*=i;
  
}
 cout<<f;
 
    return 0;
}