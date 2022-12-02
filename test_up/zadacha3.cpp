#include <iostream>

using namespace std;

int power (int number, int powah)
{
    int num = number;
    for (int i = 0; i < powah - 1; ++i)
    {
        num *= number;
    }

    return (powah == 0 ? 1 : num);
}

int length (int number)
{
    int len = 0;
    while (number != 0)
    {
        number /= 10;
        len++;
    }

    return len;
}

int addToDigits (int number, int digit)
{
    int newNum = 0, len = length(number), numCopy = number, counter = 0;
    for (int i = 0; i < len; ++i)
    {
        int current_digit = number / power(10, length(number) - 1);
        number = number % power(10, length(number) - 1);
        newNum += ((digit + current_digit) % 10) * power(10, length(numCopy) - 1 - i);
    }

    return newNum;
}

int main()
{
    int number, digit;
    do {
        cout << "Enter a valid number and a digit: ";
        cin >> number >> digit;
    } while (number <= 0 || digit < 0);
    cout << "\n";

    number = addToDigits(number, digit);
    cout << "The new number is equal to: " << number << ".";

    return 0;
}