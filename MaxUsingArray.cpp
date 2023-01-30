#include <iostream>
#include <iterator> 
using namespace std;
int main()
{
    
     int scores[]{ 84, 92, 76, 81, 56 };
   int numStudents{(size(scores)) };

    int maxScore{ 0 }; // keep track of our largest score
    for (int student{ 0 }; student <5; ++student)
    {
        if (scores[student] > maxScore)
        {
            maxScore = scores[student];
        }
    }

    std::cout << "The best score was " << maxScore << '\n';

    return 0;
}