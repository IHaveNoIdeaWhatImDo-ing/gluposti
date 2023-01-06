#include <iostream>

using namespace std;

bool isPowerOf2 (int n)
{
    if (n % 2 != 0 || n == 0)
        return false;
    if (n == 2)
        return true;
    
    return isPowerOf2(n / 2);
}

int main()
{
    cout << boolalpha << isPowerOf2(4);

    return 0;
}
