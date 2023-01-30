/*

Switch
•Switch is a branch and control statement
•Switch can have 0 or more cases
•Each case is defined with a label
•Depending on the value of expression in switch corresponding case black is executed
•Is a case block is not available then default block is executed
•Default block is optional
•Every case block must terminate with break
•If breaks are not mentioned then cases will fall thru
•Switch is used for menu-driven programs
remove break and check
default can be placed anywhere




*/

#include<iostream>
using namespace std;

int main()
{
int x=1;
switch(x)
{

case 1: cout<<"one";
break;

case 2: cout<<"two";
break;

case 3: cout<<"three";
break;

default : cout<<"invalid number";

}

    return 0;

}