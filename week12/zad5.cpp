#include <iostream>

using namespace std;

void AtoZ (char letter = 'A')
{
    if (letter > 'Z')
        return;
    
    cout << letter;
    
    AtoZ(letter + 1);
}

void ZtoA (char letter = 'Z')
{
    if (letter < 'A')
        return;
    
    cout << letter;
    
    ZtoA(letter - 1);
}

int main()
{
    ZtoA();
    AtoZ();

    return 0;
}
