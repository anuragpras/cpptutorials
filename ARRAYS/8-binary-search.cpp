#include<iostream>
using namespace std;
 
int main()
{
int A[10]={10,11,12,13,14,15,16,17,18,19},key,mid,l=0,h=9;
cout<<"enter key";
cin>>key;
mid=(l+h)/2;
while (h>=l)
{
   if (key==A[mid])
   {
       cout<<"found";
       return 0;
   }
   else if (key>A[mid])
   {
       l=mid+1;
   }
   else h=mid-1;
}

 cout<<"not found";
 
 
    return 0;
}
// can only be performed if elements are sorted
//when low become greater than high key is not there
// o(n) linear search
// o(log n) binary search is faster