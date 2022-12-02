#include <iostream>

using namespace std;

const int MAX_SIZE = 1000;

int inversions (int arr[MAX_SIZE], int length)
{
    int amount = 0;
    for (int i = 0; i < length; ++i)
    {
        for (int j = 0; j < length; ++j)
        {
            if (arr[i] > arr[j])
                amount++;
        }
    }

    return amount;
}

int main()
{
    int size;
    do {
        cout << "Enter a valid size for the array: ";
        cin >> size;
    } while (size <= 0 || size > MAX_SIZE);
    cout << "\n";

    int arr[MAX_SIZE];

    cout << "Currently inputting the elements of the array.\n";
    for (int y = 0; y < size; ++y)
    {
        cin >> arr[y];
    }

    cout << "The amount of inversions are: " << inversions(arr, size) << ".";

    return 0;
}