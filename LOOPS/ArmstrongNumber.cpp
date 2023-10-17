#include<iostream>
using namespace std;
 
int main()
{
int n,i,r,sum=0,m;
cout<<" enter n ";
cin>>n;
m=n;

   while(n>0)
   {
    r=n%10;
    n=n/10;
    cout<<r<<endl;
    sum=sum+r*r*r;
   }
    if(sum==m)
     cout<<" armstrong number";
     else
      cout<<" not armstrong";

return 0;
}
