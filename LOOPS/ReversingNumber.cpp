#include<iostream>
using namespace std;
 
int main()
{
int n,m,r;
cout<<" enter n ";
cin>>n;


   while(n>0)
   {
    r=n%10;
    n=n/10;
    m=m*10+r;
   }
    cout<<m;











 
 
 
    return 0;
}