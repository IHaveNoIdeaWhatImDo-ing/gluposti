#include <iostream>

using namespace std;

int power (int num, int times)
{
    int stepen = num;
    for (int i = 0; i < times - 1; ++i)
    {
        num *= stepen;
    }
    
    return num;
}

int length (int number)
{
    int len = 0;
    while (number > 0)
    {
        len++;
        number /= 10;
    }
    
    return len;
}

int concat (int number1, int number2)
{
    int new_number = number2, len = length(number2);
    while (number1 > 0)
    {
        int digit = number1 % 10;
        number1 /= 10;
        
        new_number += digit * power(10, len++);
    }
    
    return new_number;
}

int main()
{
    int number1, number2;
    do 
    {
        cin >> number1 >> number2;
    }
    while (number1 < 0 || number2 < 0);
    
    cout << concat(number1, number2) << endl;

    return 0;
}
