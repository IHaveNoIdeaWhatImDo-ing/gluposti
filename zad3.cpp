#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Input 2 variables: \n";
    cin >> a >> b;
    
    c = a;
    a = b;
    b = c;
    
    cout << a << " " << b;

    return 0;
}
