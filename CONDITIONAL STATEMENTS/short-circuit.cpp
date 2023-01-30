/* if && me first condition is false then 2nd condition is not checked this is short circuit 

where is else?
check for a = 5 and 15*/


//when || or is used if first condition is true 2nd condition is not checked.

/*Program to Demonstrate Short Circuit
#include <iostream>
usingnamespace std;
int main()
{
    int a=10,b=5,i=5;
    if(a>b && ++i<=b)
 { } 
 cout<<i<<endl;
 if(a<b || ++i<=b)
  { } 
  cout<<i<<endl;}
*/

#include<iostream>
using namespace std;
int main()
{

int a=5,b=7,i=5;
if(a>b && ++i<b)
{}
cout<<i;


return 0;



}
