#include <iostream>

using namespace std;

int main()
{
    int year;
    cout<<"Enter an year to check if it's a leap year: ";
    cin >> year;
    
    string leap_year = (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) ? "true" : "false";
    
    cout << "The year " << year << " being a leap year is a " << leap_year << " statement.";

    return 0;
}
