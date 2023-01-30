#include<iostream>
using namespace std;
 
int main()
{
int A[]={};
int max=INT_MIN; //when using both negative and positive values
for (auto x:A)
{
    if (x>max)
    {
        max=x;
    }
    
}

 
 
 
    return 0;
}