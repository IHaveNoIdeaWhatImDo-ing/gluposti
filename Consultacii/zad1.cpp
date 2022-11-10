#include <iostream>

using namespace std;

int DigitOccurences (int input, int digit)
{
    int occurences = 0;
    
    while (input != 0)
    {
        if (input % 10 == digit)
            occurences++;
        input /= 10;
    }
    
    return occurences;
}

int power (int number, int powah)
{
    int stepen = number;
    for (int i = 0; i < powah - 1; ++i)
    {
        number *= stepen;
    }
    
    return (powah == 0 ? 1 : number);
}

int main()
{
    unsigned input, new_number = 0;
    cin >> input;
    
    int current_power = 0;
    for (int i = 9; i >= 0; --i)
    {
        int occurences = DigitOccurences(input, i);
        
        for (int a = 0; a < occurences; ++a)
        {
            new_number += i * power(10, current_power);
            current_power++;
        }
    }
    
    cout << new_number;
    
    return 0;
}
