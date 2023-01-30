#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int age;
    cout<<"enter age"<<endl;
    cin>>age;
    if(age>=12 && age<=50)
{
    cout<<"young";
}
else
    {
        cout<<"child or old";
    }
    return 0;
}
