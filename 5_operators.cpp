#include <iostream>
using namespace std;

int main()
{
    //Program to write if number is even or odd
    int number;
    cout << "Please enter a number: ";
    cin >> number;

    if (number % 2 == 0) 
    {
        cout << "Even number" << endl;
    }
    else
    {
        cout << "Odd number" << endl;
    }
    cout << "Thanks for your input\n";

    //+,-,*,/,% - different operators
    // ++,-- increment or decrement operators
    // <,>,<=,>=,==,!= are relational operators
    // && and operator
    // || or operator
    // !(a $$ b) - ! is considered not operator
    // int x = 5 : this is assignment operator
    // x += 7 is same as x = x + 7 
}