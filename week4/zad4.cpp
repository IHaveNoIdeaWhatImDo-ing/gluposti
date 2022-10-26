#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cout<<"Enter the first, second and third coeficient of a linier equation of the type \"a*x^2 + b*x + c = 0\": ";
    cin >> a >> b >> c;
    
    double D = b * b - 4 * a * c;
    
    // Всичките тези проверки служат за оптимизация
    if (a == 0 && b == 0 && c == 0)
    {
        cout << "Every x is a solution.";
    }
    else if (a == 0 && b == 0 && c != 0)
    {
        cout << "No real solutions.";
    }
    else if ((a == 0 && b != 0 && c == 0) || (a != 0 && b == 0 && c == 0))
    {
        cout << "The only solution to x is 0.";
    }
    else
    { 
        if (D < 0)
        {
            cout << "No real solutions.";
        }
        else if (D == 0)
        {
            cout << "The only solution to x is: " << (double)(((-1) * b + sqrt(D)) / (2 * a)) << ".";
        }
        else
        {
            double x1 = ((-1) * b + sqrt(D)) / (2 * a),
                   x2 = ((-1) * b - sqrt(D)) / (2 * a);
            
            cout << "The 2 solutions to the aforementioned polynomial are: " << x1 << " and " << x2 << ".";
        }
    }
    
    return 0;
}
