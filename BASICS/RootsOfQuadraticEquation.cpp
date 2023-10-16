#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{
float a,b,c,r1,r2;
cout<<"quadratic equation is ax^2+bx+c enter the values of a,b,c ";
cin>>a>>b>>c;
r1=(-b+sqrt(b*b-4*a*c))/(2*a);
r2=(-b-sqrt(b*b-4*a*c))/(2*a);
cout<<"the roots of equation are "<<r1<<" "<<r2;
 
 
 
    return 0;
}