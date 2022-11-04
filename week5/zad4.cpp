#include <iostream>

using namespace std;

int main()
{
    int number;
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
        
        
        if (digit1 != digit2 && digit2 != digit3 && digit1 != digit3)
        {
            cout << i << endl;
        }
    }

    return 0;
}
