#include <iostream>

using std::cin;
using std::cout;

int main()
{
    cout << "Input apples, pears and bananas:\n";
    int apples, pears, bananas;
    cin >> apples >> pears >> bananas;
    
    cout << "\nTraicho, don't forget to buy " << apples  << " apples, " 
                                              << pears   << " pears, "
                                              << bananas << " bananas!";

    return 0;
}
