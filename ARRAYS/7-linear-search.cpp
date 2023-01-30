#include<iostream>
using namespace std;
 
int main()
{
int A[5],n=5,key;
 cout<<"enter numbers";
 for (int i = 0; i < n; i++)
 {
    cin>>A[i];

 }
 cout<<"enter key";
 cin>>key;
  for (int i = 0; i < 5; i++)
  {
   if(key==A[i])
   cout<<"found at"<<i;
   exit(0);
  }
  cout<<"not found";
  
 
    return 0;
}
// searching is process of finding location of an element ie index.