#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Input a 3-digit number: ";
    cin >> a;
    
    b = a % 10;
    a /= 10;
    c = a % 10;
    a /= 10;
    d = a % 10;
    
    cout << "The sum of all of the digits is: " << b + c + d;

    return 0;
}
