#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Enter an x and a y coordinate: ";
    cin >> x >> y;
    
    if (x == 0 and y == 0)
    {
        cout << "The pont is located a the start.";
    }
    else if (x == 0 || y == 0)
    {
        cout << "The point is on the " << ((x == 0) ? "x" : "y") << "axis.";
    }
    else
    {
        if (x > 0)
        {
            if (y > 0)
            {
                cout << "The point is located in the first quadrant.";
            }
            else
            {
                cout << "The point is located in the fourth quadrant.";
            }
        }
        else
        {
            if (y > 0)
            {
                cout << "The point is located in the second quadrant.";
            }
            else
            {
                cout << "The point is located in the third quadrant.";
            }
        }
    }

    return 0;
}
