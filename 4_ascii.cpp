#include <iostream>
using namespace std;

int main()
{
    // Finding Ascii value of a aka type casting
    cout << (int)'a' << endl;

    // Another way to find ascii
    cout << int('a') << endl;

    // ASCII of A
    cout << int('A') << endl;

    // ASCII of char value of 65
    cout << char(65) << endl;


    // Doing a cypher exercise

    char c1, c2, c3, c4, c5;
    cout << "Enter 5 letters\n";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message of letters: \n" << 
    int(c1) << " " <<
    int(c2) << " " <<
    int(c3) << " " <<
    int(c4) << " " <<
    int(c5) << endl;

}