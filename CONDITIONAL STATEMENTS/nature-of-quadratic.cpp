#include<iostream>
#include<math.h>
using namespace std;
int main(int argc, char const *argv[])
{
   
    float a,b,c,d;
cout<<"enter a,b,c";
    cin>>a>>b>>c;
    d=((b*b)-(4*a*c));

    if(d==0)
    {
        cout<<"real and equal";
    }
    
else

  {
        if(d>0)
cout<<"real and unequal";


else

cout<<"imaginary ";

  }
    return 0;
}

