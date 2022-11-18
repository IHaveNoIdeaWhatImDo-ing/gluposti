#include <iostream>

using namespace std;

int ARR_SIZE = 100;

void multByScalar (int arr[], int length, int scalar)
{
    for (int i = 0; i < length; ++i)
    {
        *(arr + i) *= scalar;
    }
}

void multByScalar (double arr[], int length, double scalar)
{
    for (int i = 0; i < length; ++i)
    {
        *(arr + i) *= scalar;
    }
}

int main()
{
    int N;
    do {
        cout << "Enter an array length between 1 and 100: ";
        cin >> N;
    } while (N <= 0 || N > 100);
    cout << endl;
    
    double arr[ARR_SIZE];
    
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }
    cout << endl;
    
    multByScalar(arr, N, 2.5);
    
    cout << "The values of the array, multiplied by 2: " << endl;
    for (int i = 0; i < N; ++i)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
