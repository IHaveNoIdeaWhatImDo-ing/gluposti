#include <iostream>

using namespace std;

const int SIZE = 100;

bool isInteresting (int number)
{
    int last_digit = number % 10;
    number /= 10;
    
    while (number != 0)
    {
        int current_digit = number % 10;
        number /= 10;
        
        if (current_digit > last_digit)
            return false;
        
        last_digit = current_digit;
    }
    
    return true;
}

int main ()
{
    int arr[SIZE] = {};
    int N;
    do {
        cout << "Enter the amount of elements you would like input: ";
        cin >> N;
    } while (N < 1 || N > 100);
    
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
        
        while (arr[i] < 0)
        {
            cout << "Enter positive numbers only." << endl;
            cin >> arr[i];
        }
    }
    
    for (int i = 0; i < N; ++i)
    {
        cout << "The number " << arr[i] << (isInteresting(arr[i]) ? " is" : " is not") << " an interesting number." << endl;
    }
    
    return 0;
}
