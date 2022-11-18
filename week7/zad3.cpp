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
    
    int larger;
    for (int i = 1; i < N - 1; ++i)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
          larger++;
    }
  
    cout << larger;

    return 0;
}
