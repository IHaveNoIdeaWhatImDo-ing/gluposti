#include <iostream>

using namespace std;

int sum (int* arr, int length)
{
    if (length == 0)
        return 0;
    
    return arr[0] + sum(arr + 1, length - 1);
}

int main()
{
    int* arr = new int[6] {1, 2, 3, 4, 5};
    cout << sum(arr, 6);

    delete[] arr;

    return 0;
}
