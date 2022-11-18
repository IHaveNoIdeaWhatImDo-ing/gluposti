#include <iostream>

using namespace std;

int ARR_SIZE = 100;

void reverseArray (int arr[], int length)
{
    for (int i = 0; i < length / 2; ++i)
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + length - i - 1);
        *(arr + length - i - 1) = temp;
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
    
    int arr[ARR_SIZE];
    
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }
    cout << endl;
    
    reverseArray(arr, N);
    
    cout << "The reversed values of the array are: " << endl;
    for (int i = 0; i < N; ++i)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
