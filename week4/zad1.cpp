#include <iostream>

using namespace std;

int main()
{
    int day;
    string day_name;
    cout<<"Enter a day of the week as a number: ";
    cin >> day;
    
    switch (day)
    {
        case 1:
            day_name = "Monday";
        break;
        case 2:
            day_name = "Thuesday";
        break;
        case 3:
            day_name = "Wednesday";
        break;
        case 4:
            day_name = "Thursday";
        break;
        case 5:
            day_name = "Friday";
        break;
        case 6:
            day_name = "Saturday";
        break;
        case 7:
            day_name = "Sunday";
        break;
    }
    
    cout << "The day you entered is " << day_name;

    return 0;
}
