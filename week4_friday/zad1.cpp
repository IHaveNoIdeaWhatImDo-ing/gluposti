#include <iostream>

using namespace std;

int main()
{
    int month, year, days;
    cout << "Enter a month and year: ";
    cin >> month >> year;
    
    bool leap_year = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
    
    if (month > 0 && month < 13)
    {
        if (month == 2)
        {
            days = leap_year ? 29 : 28;
        }
        else
        {
            days = (month % 2 == 0) ? 30 : 31;
        }
    }
    
    cout << "The given month has " << days << " days.";

    return 0;
}
