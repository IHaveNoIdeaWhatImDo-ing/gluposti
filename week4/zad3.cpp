#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout<<"Enter the first and second coeficient of a linier equation of the type \"a*x + b = 0\": ";
    cin >> a >> b;
    
    if (a == 0 && b != 0)
    {
        cout << "No real solutions.";
    }
    else
    {
        cout << "The answre to x is: " << (double)((-1) * b / a);
    }
    
    return 0;
}
