#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int* firstInstance (int *arr, int element, int length)
{ 
    for (int i = 0; i < length; ++i)
    {
        if (*(arr + i) == element)
            return (arr + i);
    }
    
    return NULL;
}
    
int main()
{
    int N, element;
    do {
        cout << "Enter a valid length for an array and the element to look for: ";
        cin >> N >> element;
    } while (N <= 0 || N > 100);
    
    int *arr = new int[N];
    
    cout << "\nEnter the array's elements: \n";
    for (int i = 0; i < N; ++i)
    {
        cin >> *(arr + i);
    }
    
    int *address = firstInstance(arr, element, N);
    
    cout << "\nThe address of the first instance of the given element is: " << address;

    return 0;
}
