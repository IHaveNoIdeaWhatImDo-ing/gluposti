#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int seconds;
    cin >> seconds;
    
    double days  = (double)seconds / (3600 * 24),
           hours = (seconds % (3600 * 24)) / 3600,
           mins  = (seconds % 3600 - hours) / 60,
           left_seconds = seconds % 60;
        
    
    /*
        1 min  = sec / 60^1
        1 hour = sec / 60^2
        1 day  = sec / 60^2 / 24
    */
    cout << floor(days)  << " days, "
         << floor(hours) << " hours, "
         << floor(mins)  << " minutes and "
         << left_seconds << " seconds.";

    return 0;
}
