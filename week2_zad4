#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Input a positive 3 digit number: ";
    int num, new_num = 0;
    cin >> num;
    
    int digit1 = (num % 10) * 100;
    num /= 10;
    int digit2 = (num % 10) * 10;
    num /= 10;
    int digit3 = num % 10;
    
    new_num = digit1 + digit2 + digit3;
    
    cout << new_num;

    return 0;
}
