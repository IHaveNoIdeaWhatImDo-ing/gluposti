#include <iostream>

using namespace std;

int main()
{
    unsigned int number;
    cout << "Enter a natural number: ";
    cin >> number;
    
    for (unsigned int i = number; i > 1; --i)
    {
        number *= i - 1;
    }
    
    cout << "The factoriel of the inputed number is: " << number << ".";
}
