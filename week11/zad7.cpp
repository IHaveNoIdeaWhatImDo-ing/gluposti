#include <iostream>

using namespace std;

int smallest (int* arr, int length, int smol = INT32_MAX)
{
    if (length == 0)
        return smol;
    else if (arr[0] < smol)
        smol = arr[0];
    
    return smallest(arr + 1, length - 1, smol);
}

int main()
{
    int* arr = new int[6] {41, 65, 39, 23, 2, 43};
    cout << smallest(arr, 6);
    
    delete[] arr;

    return 0;
}
