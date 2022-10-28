#include <iostream>

using namespace std;

int main()
{
    unsigned short side1, side2, side3;
    cout << "Enter the three sides of a triangle: ";
    cin >> side1 >> side2 >> side3;
    
    if ((side1 + side2) > side3 && (side2 + side3) > side1 && (side1 + side3) ? side2)
    {
        cout << "This triangle is possible.";
    }
    else
    {
        cout << "This triangle is impossible.";
    }

    return 0;
}
