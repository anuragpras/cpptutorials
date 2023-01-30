
#include<iostream>
using namespace std;
 
int main()
{
int scores[]{ 84, 92, 76, 81, 56 };
 int numStudents{ (std::size(scores)) };

int totalScore{ 0 };


for (int student{ 0 }; student < numStudents; ++student)
    totalScore += scores[student];

auto averageScore{(totalScore) / numStudents };
 
 cout<<totalScore;
 
    return 0;
}



