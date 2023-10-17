#include<iostream>
using namespace std;
 
int main()
{

int n,i,c=0;
cout<<"enter the number n ";
cin>>n;

for(i=1;i<=n;i++)
{
if(n%i==0)
{
    c++;

}
 
} 
 if(c==2)
  cout<<" it is a prime number ";
 else
  cout<<" not prime number ";
    return 0;
}