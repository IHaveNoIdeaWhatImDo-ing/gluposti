#include <iostream>

using namespace std;

bool IsPrime (int number)
{
    for (int i = 2; i < number; ++i)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    
    return true;
}

int main()
{
    int upperBoundry;
    cin >> upperBoundry;
    
    for (int i = 2; i <= upperBoundry; ++i)
    {
        if (IsPrime(i))
            cout << i << endl;
    }

    return 0;
}
