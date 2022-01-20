#include <iostream>
using namespace std;

int main ()
{
    int hostNum, guestNum;

    cout << "Enter a Host number: ";
    cin >> hostNum;
    
    system("clear");

    cout << "Enter guest number: ";
    cin >> guestNum;

    // Ternary operator is ? (like if) and : is like else

    (hostNum == guestNum)? cout << "Correct": cout << "Failed" << endl;
}