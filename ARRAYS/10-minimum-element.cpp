#include<iostream>
using namespace std;
 
int main()
{
int A[]={};
int min=INT_MAX; //when using both negative and positive values
for (auto x:A)
{
    if (x<min)
    {
        min=x;
    }
    
}

 
 
 
    return 0;
}