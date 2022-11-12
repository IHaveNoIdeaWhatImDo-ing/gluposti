#include <iostream>

using namespace std;

int power (int number, int powah)
{
    int multiplier = number;
    
    for (int i = 0; i < powah - 1; ++i)
    {
        number *= multiplier;
    }
    
    return number;
}

bool isPower (int number1, int number2)
{
    int stepen = 1;
    while  (power(number1, stepen) <= number2)
    {
        if (power(number1, stepen) == number2)
            return true;
        stepen++;
    }
    
    return false;
}

int powah (int number1, int number2)
{
    int stepen = number1, counter = 1;
    while (number1 != number2)
    {
        number1 *= stepen;
        counter++;
    }
    
    return counter;
}

int main()
{
    int number1, number2;
    do 
    {
        cout << "Enter 2 positive numbers, where the second one is larger than the first one: ";
        cin >> number1 >> number2; 0
    }
    while (number1 <= 0 || number2 < number1);
    
    if (isPower(number1, number2))
        cout << "The number " << number2 << " is " << number1 << " rased to the power of " << powah(number1, number2) << ".\n";
    else
        cout << "The number " << number2 << " is not a power of the number " << number1 << ".\n";

    return 0;
}
