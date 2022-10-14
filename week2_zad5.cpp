#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int base_length = 4, apotema = 6, height = 5;
    double B = base_length * base_length;
    double V = B * height / 3;
    double neshto_si_tam = sqrt(apotema * apotema - (base_length / 2) * (base_length / 2));
    double side_area = neshto_si_tam * base_length / 2;
    double S1 = side_area * 4 + B;
    
    cout << "Volume: " << V << "\nArea: " << S1;
    
    return 0;
}
