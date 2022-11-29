#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void transpose (int matrix[][MAX_SIZE], int newMatrix[][MAX_SIZE], int rows, int cols)
{
    for (int x = 0; x < cols; ++x)
    { 
        for (int y = 0; y < rows; ++y)
        {
            newMatrix[x][y] = matrix[y][x];
        }
    }
}

int main()
{
    int rows, columns;
    
    do {
        cout << "Enter valid width and height for the first and the matrix: ";
        cin >> rows >> columns;
    } while ( rows    <= 0 || rows    > MAX_SIZE||
              columns <= 0 || columns > MAX_SIZE);
    
    int matrix[MAX_SIZE][MAX_SIZE],
        newMatrix[MAX_SIZE][MAX_SIZE];
        
    for (int x = 0; x < rows; ++x)
    {
        cout << "You're currently entering the elements of row " << x + 1 << ".\n";
        for (int y = 0; y < columns; ++y)
        {
            cin >> matrix[x][y];
        }
    }
    cout << endl;
    
    transpose(matrix, newMatrix, rows, columns);
    
    for (int x = 0; x < columns; ++x)
    {
        for (int y = 0; y < rows; ++y)
        {
            cout << newMatrix[x][y] << " ";
        }
        cout << endl;
    }

    return 0;
}
