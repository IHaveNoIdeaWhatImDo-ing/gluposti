#include <iostream>

using namespace std;

const int ARR_SIZE = 100;
int arr[ARR_SIZE];

bool sorted (int length)
{
    for (int i = 0; i < length - 1; ++i)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

void sortArray (int length)
{
    while (!sorted(length))
    {
        for (int i = 0; i < length - 1; ++i)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main()
{
    int N;
    do {
        cout << "Enter an array length between 1 and 100: ";
        cin >> N;
    } while (N <= 0 || N > ARR_SIZE);
    cout << endl;
    
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }
    cout << endl;
    
    sortArray(N);
    
    cout << "The sorted elements of the array: " << endl;
    for (int i = 0; i < N; ++i)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
