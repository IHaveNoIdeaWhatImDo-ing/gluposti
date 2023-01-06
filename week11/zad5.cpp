#include <iostream>

using namespace std;

bool sorted (int arr[5], int length)
{
    if (arr[0] > arr[1])
    {
        cout << length;
        return false;
    }
    else if (length == 2 || length == 1)
        return true;
    
    return sorted(arr + 1, length - 1);
}

int main()
{
    int arr[] = {1, 1, 1, 1, 1};
    
    cout << boolalpha << sorted(arr, 5);

    return 0;
}
