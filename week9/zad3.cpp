#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void multByScalar (int arr[MAX_SIZE], int scalar, int length)
{
    cout << "Elements of array before multiplication: \n";
    for (int i = 0; i < length; ++i)
    {
        cout << arr[i] << " ";
    }
    
    for (int i = 0; i < length; ++i)
    {
        arr[i] *= scalar;
    }
}
    
int main()
{
    int N, scalar;
    do {
        cout << "Enter a valid length for an array and a scalar: ";
        cin >> N >> scalar;
    } while (N <= 0 || N > 100);
    
    int arr[MAX_SIZE] = {};
    
    cout << "\nEnter the array's elements: \n";
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }
    
    multByScalar(arr, scalar, N);
    
    cout << "\nElements of the array after the multiplication: \n";
    for (int i = 0; i < N; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
