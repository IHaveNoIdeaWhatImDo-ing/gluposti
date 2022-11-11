#include <iostream>
#include <cmath>

using namespace std;

int isPrime (int number)
{
    for (int i = 2; i <= sqrt(number); ++i)
    {
        if (number % i == 0)
            return false;
    }
    
    return true;
}

int reverse (int number)
{
    int reverse_number = 0;
    
    int digit;
    while (number != 0)
    {
        digit = number % 10;
        reverse_number = reverse_number * 10 + digit;
        number /= 10;
    }
    
    return reverse_number;
}

bool isPalindrome (int number)
{
    return number == reverse(number);
}

int main()
{
    int n;
    do
    {
        cin >> n;
    }
    while (n < 1);
    
    int counter = 2;
    while (n != 0)
    {
        if (isPrime(counter) && isPalindrome(counter))
        {
            cout << counter << endl;
            n--;
        }
        counter++;
    }

    return 0;
}
