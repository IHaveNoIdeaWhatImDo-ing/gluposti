#include <iostream>

using namespace std;

bool isPowerOfTwo (int number)
{
    while (number > 2)
    {
        if (number % 2 != 0)
        {
            return false;
        }
        number /= 2;
    }
    
    return true;
}

int main()
{
    int number;
    do 
    {
        cin >> number;
    }
    while (number <= 1);
    
    cout << "The number you entered " << (isPowerOfTwo(number) ? "is " : "is not ") << "a power of 2.";

    return 0;
}
