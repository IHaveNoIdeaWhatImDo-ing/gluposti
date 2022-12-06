#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void largestAndSmallest (int *arr, int &smallest, int &largest, int length)
{ 
    for (int i = 0; i < length; ++i)
    {
        if (smallest > *(arr + i))
            smallest = *(arr + i);
        if (largest  < *(arr + i))
            largest  = *(arr + i);
    }
}
    
int main()
{
    int N, largest, smallest;
    do {
        cout << "Enter a valid length for an array: ";
        cin >> N;
    } while (N <= 0 || N > 100);
    
    int *arr = new int[N];
    
    cout << "\nEnter the array's elements: \n";
    for (int i = 0; i < N; ++i)
    {
        cin >> *(arr + i);
    }
    smallest = *arr;
    largest = *arr;
    
    largestAndSmallest(arr, smallest, largest, N);
    
    cout << "\nThe largest element in the array is " << largest << " and the smallest is " << smallest;
    
    delete[] arr;

    return 0;
}
