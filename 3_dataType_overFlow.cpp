#include <iostream>
#include <climits>
using namespace std;


int main()
{
    int intMax = INT_MAX;
    // without declaring climits INT_MAX will throw error
    cout << intMax << endl;

    // Below statement will cause int to overflow
    cout << intMax + 1 << endl;
}
