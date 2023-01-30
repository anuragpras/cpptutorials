#include<iostream>
using namespace std;

int main()
{
    int hour;
    cout<<"enter time"<<endl;

    cin>>hour;

    if (hour>=9 && hour<=18)
    {
        cout<<"it is a working hour"<<endl;
    }
    else
    {
        cout<<"it is not a working hour"<<endl;
    }
    return 0;
}

// && || ! are logical operators
// program for working hours 9am to 6pm