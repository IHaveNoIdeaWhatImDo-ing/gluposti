#include <iostream>

using namespace std;

int GCD (int num1, int num2)
{
    if (num1 > num2)
    {
        if (num1 % num2 == 0)
            return num2;
    
        return GCD (num2, num1 % num2);
    }
    else
    {
        if (num2 % num1 == 0)
            return num1;
    
        return GCD (num1, num2 % num1);
    }
}

int main ()
{
    int NOD = GCD (78, 66);
    cout << NOD;
}
