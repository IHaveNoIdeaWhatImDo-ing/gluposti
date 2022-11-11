#include <iostream>

using namespace std;

double larger (double number1, double number2)
{   
    return (number1 >= number2 ? number1 : number2);
}

int main()
{
    double num1, num2;
    cin >> num1 >> num2;
    
    cout << larger(num1, num2);

    return 0;
}
