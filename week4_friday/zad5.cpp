#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool condition = true; 
    
    // task 1
    int p;
    cin >> p;
    
    if (p % 4 != 0 || p % 7 != 0)
    {
        condition = false;
    }
    
    // task 2
    int a, b, c;
    cin >> a >> b >> c;
    
    if ((a == 0 && b == 0 && c != 0) || (b * b - 4 * a * c) < 0)
    {
        condition = false;
    }
    
    // task 3
    int x, y;
    cin >> x >> y;
    
    if (!(sqrt((x + 1) * (x + 1) + y * y) < 5))
    {
        condition = false;
    }
    
    // task 4
    int c, d, f;
    cin >> x >> y >> c >> d >> f;
    
    if (!(sqrt((x + c) * (x + c) + (y + f) * (y + f)) > f))
    {
        condition = false;
    }
    
    // task 5
    cin >> x >> y;
    
    if (!(sqrt(x * x + y * y) < 5 && x < 0 && y < 0))
    {
        condition = false;
    }
    
    // task 6
    int x, y;
    cin >> x >> y;
    
    if (!(sqrt(x * x + y * y) < 10 && sqrt(x * x + y * y) > 5))
    {
        condition = false;
    }
    
    // task 7
    double x_double;
    cin >> x_double;
    if (!(x_double >= 0 && x_double <= 1))
    {
        condition = false;
    }
    
    // task 10 (за 8 и 9 не разбрах условията)
    bool uslovie1, uslovie2;
    cin >> uslovie1 >> uslovie2;
    if (!uslovie1 && !uslovie2)
    {
        condition = false;
    }
    
    // task 11
    cin >> uslovie1 >> uslovie2;
    if (!uslovie1 || !uslovie2)
    {
        condition = false;
    }
    
    // task 12
    cin >> a >> b >> c;
    if (a >= 0 || b >= 0 || c >= 0)
    {
        conditiion = false;
    }
    
    // task 13
    cin >> a;
    
    int digit1 = a % 10;
    a /= 10;
    int digit2 = a % 10;
    a /= 10;
    int digit3 = a % 10;
    
    if (digit1 != 7 && digit2 != 7 && digit3 != 7)
    {
        condition = false;
    }
    
    // task 14
    cin >> a;
    
    int digit1 = a % 10;
    a /= 10;
    int digit2 = a % 10;
    a /= 10;
    int digit3 = a % 10;
    
    if (digit1 == digit2 || digit2 == digit3 || digit1 == digit3)
    {
        condition = false;
    }
    
    // task 15
    cin >> a;
    
    int digit1 = a % 10;
    a /= 10;
    int digit2 = a % 10;
    a /= 10;
    int digit3 = a % 10;
    
    bool same_digits = digit1 == digit2 || digit2 == digit3 || digit1 == digit3;
    
    if (!same_digits)
    {
        condition = false;
    }
    
    cout << "The conditions are " << (condition ? "true." : "false.");

    return 0;
}
