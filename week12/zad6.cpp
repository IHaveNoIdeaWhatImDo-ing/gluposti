#include <iostream>

using namespace std;

void stars (int amount)
{
    if (amount < 0)
        return;
    
    cout << '*';
    
    stars(amount - 1);
}

void pyramid (int height, int current = 0)
{
    if (height == current)
        return;
    
    stars(current);
    cout << '\n';
    
    pyramid(height, current + 1);
}

void revPyramid (int height)
{
    if (height < 0)
        return;
    
    stars(height);
    cout << '\n';
    
    revPyramid(height - 1);
}

int main()
{
    pyramid(6);
    revPyramid(6);

    return 0;
}
