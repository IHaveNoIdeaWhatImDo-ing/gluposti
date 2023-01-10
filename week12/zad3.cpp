#include <iostream>

const int MAX_SIZE = 256;

using namespace std;

double average (double*& arr, int& length)
{
    int sum = 0;
    
    for (int i = 0; i < length; ++i)
        sum += arr[i];
    
    return sum / length;
}

int main()
{
    int len;
    do {
        cout << "Enter the array's length: ";
        cin >> len;
    } while (len <= 0);
    
    double* arr = new double[MAX_SIZE];
    
    cout << "Enter the array's elements: " << '\n';
    for (int i = 0; i < len; ++i)
    {
        cin >> arr[i];
    } cout << '\n';
    
    double avg = average(arr, len);
    
    for (int i = len - 1; i >= 0; --i)
    {
        if (arr[i] == avg)
        {
            cout << "The index of the last element, equal to the aveage value is: " << i;
            break;
        }
    }
    
    delete[] arr;

    return 0;
}
