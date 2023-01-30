#include <iostream>
#include <iterator> // for std::size
using namespace std;
int main()
{
    int array[]{ 1, 1, 2, 3, 5, 8, 13, 21 };
    cout << "The array has: " << size(array) << " elements\n";

    return 0;
}