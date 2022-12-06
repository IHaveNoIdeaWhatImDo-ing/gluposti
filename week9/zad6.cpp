#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int* seekElement (int** arr, int width, int height, int element)
{ 
    for (int x = 0; x < width; ++x)
    {
        for (int y = 0; y < height; ++y)
        {
            if (arr[x][y] == element)
                return &arr[x][y];
        }
    }
    
    return NULL;
}
    
int main()
{
    int X, Y, element;
    do {
        cout << "Enter valid width and height for a matrix and an element to seek: ";
        cin >> X >> Y >> element;
    } while (X <= 0 || X > MAX_SIZE || Y <= 0 || Y > MAX_SIZE);
    
    int** matrix = new int*[X];
    for (int i = 0; i < Y; ++i)
    {
        matrix[i] = new int[Y];
    }
    
    for (int x = 0; x < X; ++x)
    {
        cout << "Entering the the elements of row " << x + 1 << "\n";
        for (int y = 0; y < Y; ++y)
        {
            cin >> matrix[x][y];
        }
    }
    
    int* pointer = seekElement(matrix, X, Y, element);
    
    cout << "\nThe pointer to the element is: " << pointer;
    
    for (int i = 0; i < X; ++i)
    {
        delete[] matrix[i];
    }

    return 0;
}
