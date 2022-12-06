#include <iostream>

using namespace std;

int copyToFirst (int *num1, int *num2)
{
    int c = *num1;
    *num1 = *num2;
    
    return c;
}
    
int main()
{
    int a, b;
    cin >> a >> b;
    
    int oldValue = copyToFirst(&a, &b);
    
    cout << a << " " << b << "\nold value: " << oldValue;

    return 0;
}
