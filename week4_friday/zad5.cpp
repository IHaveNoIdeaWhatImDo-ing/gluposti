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
    // unfinished
  
    cout << "The condition is " << (condition ? "true." : "false.");

    return 0;
}
