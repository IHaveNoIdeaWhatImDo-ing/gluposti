#include <iostream>

using namespace std;

int main()
{
    unsigned short year;
    cout << "Enter an year: ";
    cin >> year;
    
    cout << "The given year is " << (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? "" : "not ") << "a leap year.";

    return 0;
}
