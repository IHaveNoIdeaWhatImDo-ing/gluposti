#include <iostream>

using namespace std;

void ZtoA (char letter = 'Z')
{
    if (letter == ('A' - 1))
        return;
    
    cout << letter;
    
    ZtoA(letter - 1);
}

int main()
{
    ZtoA();

    return 0;
}
