#include <iostream>

using namespace std;

int main()
{
    unsigned int number;
    do
    {
        cout << "Enter a 3 digit number: ";
        cin >> number;
    }
    while (number < 100);
    
    for (unsigned int i = 100; i <= number; ++i)
    {
        unsigned int current_number = i;
        
        short digit1 = current_number % 10;
        current_number /= 10;
        short digit2 = current_number % 10;
        current_number /= 10;
        short digit3 = current_number % 10;
        
        int product = digit1 * digit2 * digit3;
        
        if (product != 0 && i % product == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}
