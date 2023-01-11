#include <iostream>

using namespace std;

bool removeElement (int*& arr, int& size, int& element)
{
    int newSize = 0;
    
    for (int i = 0; i < size; ++i) {
        if (arr[i] != element)
            newSize++;
    }
    
    if (newSize == size)
        return false;
    
    int* newArr = new int[newSize];
    
    for (int i = 0, index = 0; i < size; ++i)
    {
        if (arr[i] != element)
            newArr[index++] = arr[i];
    }
    
    int* tempPtr = arr;
    arr = newArr;
    newArr = tempPtr;
    delete[] newArr;
    size = newSize;
    
    return true;
}

int main ()
{
    int size, element;
    do {
        cout << "Enter the array's size and an element to delete from the array: ";
        cin >> size >> element;
    } while (size <= 0);
    
    int* arr = new int[size];
    
    cout << "\nEnter the array's elements:\n";
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    
    if (removeElement(arr, size, element))
        cout << "\nAll occurensess of the element have been removed.\n";
    else
        cout << "\nThe element is not present in the array.\n";
    
    delete[] arr;
    
    return 0;
}
