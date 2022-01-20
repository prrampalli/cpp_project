#include <iostream>
using namespace std;
#include <climits>

int main()
{
    // We declare differnet variables

    //float

    float annualSalary = 50000.99;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary;
    cout << "\n";

    // cin >> command

    int number1, number2;
    cout << "Please enter a number1 \n";
    cin >> number1;

    cout << "Please enter Number 2 \n";
    cin >> number2;

    cout << "Addition of both numbers: " << number1 + number2 << "\n";
    cout << "Subtraction of both numbers: " << number1 - number2 << "\n";;
    cout << "Multiplication of both numbers: " << number1 * number2 << "\n";;
    cout << "Division of both numbers: " << number1 / number2 << "\n";;

    // most common datatypes
    char character = 'a';
    int yearofBirth = 1995;
    char gender = 'm';
    bool isOlderThan18 = true;
    float avgGrade = 4.5;
    double balance = 12345678;

    cout << "Size of int is " << sizeof(int) << " bytes\n";
    cout << "Size of int min value is " << INT_MIN << endl;
    cout << "Size of int is " << INT_MAX << endl;

    cout << "Size of unsize int is: " << sizeof(unsigned int) << " bytes \n";
    cout << "Unsigned Int (UInt) max value " << UINT_MAX << endl;


    cout << "Size of bool is " << sizeof(bool) << " bytes\n";
    cout << "Size of char is " << sizeof(char) << " bytes\n";
    cout << "Size of float is " << sizeof(float) << " bytes\n";
    cout << "Size of double is " << sizeof(double) << " bytes\n";

}