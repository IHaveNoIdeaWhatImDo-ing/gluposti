#include <iostream>

using namespace std;

int ARR_SIZE = 100;

int main()
{
    int N;
    do
    {
        cout << "Enter a valid array size, between 1 and 100: ";
        cin >> N;
    }
    while (N <= 0 || N > ARR_SIZE);
    int arr[ARR_SIZE] = {};
    
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < N; i += 2)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
