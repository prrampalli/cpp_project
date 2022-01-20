#include <iostream>
using namespace std;

int main ()
{
    // swapping 2 variable
    int a = 20;
    int b = 10;

    // taking a 3rd variable
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << ", b = " << b << endl;


    // below example is without e=using temp variable
    // hasout above logic else results will be incorrect
    // since values of a and b are changed

    a = a + b; //30
    b = a - b; //20
    a = a - b; //10

    cout << "a = " << a << ", b = " << b << endl;

}