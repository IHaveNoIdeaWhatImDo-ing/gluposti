#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double n, m, a;
    cout << "Floor width: ";
    cin >> n;
    cout << "Floor height: ";
    cin >> m;
    cout << "Tile side lenght: ";
    cin >> a;
    
    cout << "Tiles necessary to cover the floor: " << ceil(n / a) * ceil(m / a);

    return 0;
}
