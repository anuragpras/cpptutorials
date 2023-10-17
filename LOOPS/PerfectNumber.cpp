#include<iostream>
using namespace std;

//perfect number : sum of the factros of the numbers is double the number

int main()
{

int n,sum=0;
cout<<"Enter a no. ";
cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
        cout<<"sum of factors is " << sum <<endl;

        if(2*n==sum)
        cout<<"perfect number";
        else
        cout<<"not a perfect number";
return 0;
}
 