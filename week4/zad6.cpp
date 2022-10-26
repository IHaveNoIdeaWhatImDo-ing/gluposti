#include <iostream>

using namespace std;

int main()
{
    int date;
    cout << "Enter a date as an 8-digit number: ";
    cin >> date;
    
    int year = date % 10000;
    date /= 10000;
    int month = date % 100;
    date /= 100;
    int day = date;
    
    // Дните трябва да са <= 30, ако е четен месеца (28 през февруари) и <= 31, ако не са.
    if ((month % 2 == 0 && day <= 30) || (month == 2 && day <= 28) || (month % 2 != 0 && day <= 31))
    {
        if (month <= 12)
        {
            cout << day << "/" << (month < 10 ? "0" : "") << month << "/" << year << " is a valid date.";
        }
        else
        {
            cout << "Invalid date.";
        }
    }
    else
    {
        cout << "Invalid date.";
    }

    return 0;
}
