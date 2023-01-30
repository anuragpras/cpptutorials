

//Dynamic Declaration uses less memory 
//also c and d will be used in limited scope ie only in the if function it is declared not outisde of it
#include <iostream>
using namespace std;
int main()
{
    int a=10,b=5;
    if(true)
     {
         int c=a+b;  
         
         cout<<c<<endl;
          } 
          
          {
              int d=a-b;
              if(true)
               { 
                    cout<<d<<endl;  } 
                }
                
                
                if(int e=a*b)
                 {  cout<<e<<endl; }
                 
                 
                 return 0;
                 }


// use {} for limited scope
