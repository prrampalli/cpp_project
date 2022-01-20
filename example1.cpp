#include <iostream>
using namespace std;

int main ()
{
    int a = 5, b = 4;
    cout << a << endl;
    cout << b << endl;

    // Important - b++ returns the value 4 and then increment
    // where as ++b incrments the vakue before
    // so if b=4, b++ remains 4 for this line of code where as ++b = 5 for this line
    cout << a + (b++) << endl;
    cout << (--a) + b << endl;

    // read logic gates if in doubt
    cout << !(true && false) << endl;
    cout << (true && false || true) << endl;
    
    int x = 7;
    cout << (++x <= 9 && x + 2 >=10) << endl;

    int y = 3;
    cout << (y == y++) << endl;

    float z = 8;
    z += 2;
    cout << z << endl;
    z /= 2;
    cout << z << endl;
}