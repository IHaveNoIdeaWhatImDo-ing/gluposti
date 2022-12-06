#include <iostream>

using namespace std;

void intSwap (int *num1, int *num2)
{
    int c = *num1;
    *num1 = *num2;
    *num2 = c;
}
    
int main()
{
    int a, b;
    cin >> a >> b;
    
    swap(a, b);
    
    cout << a << " " << b;

    return 0;
}
