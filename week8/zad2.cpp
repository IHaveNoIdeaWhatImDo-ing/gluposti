#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void matrixMult (int matrix1[][MAX_SIZE], int matrix2[][MAX_SIZE], int newMatrix[][MAX_SIZE], int row1, int col1, int col2)
{
    for (int x = 0; x < row1; ++x)
    {
        for (int y = 0; y < col2; ++y)
        {
            int currentElement = 0;
            for (int i = 0; i < col1; ++i)
            {
                currentElement += matrix1[x][i] * matrix2[i][y];
            }
            
            newMatrix[x][y] = currentElement;
        }
    }
}

int main()
{
    int rows1, columns1, rows2, columns2;
    
    do {
        cout << "Enter valid width and height for the first and the second matrix: ";
        cin >> rows1 >> columns1 >> rows2 >> columns2;
    } while ( columns1 != rows2 ||
              rows1    <= 0 || rows1    > MAX_SIZE ||
              columns1 <= 0 || columns1 > MAX_SIZE ||
              columns2 <= 0 || columns2 > MAX_SIZE );
    
    int matrix1[MAX_SIZE][MAX_SIZE],
        matrix2[MAX_SIZE][MAX_SIZE],
        newMatrix[MAX_SIZE][MAX_SIZE];
        
    for (int x = 0; x < rows1; ++x)
    {
        cout << "You're currently entering the elements of row " << x + 1 << " of the first matrix.\n";
        for (int y = 0; y < columns1; ++y)
        {
            cin >> matrix1[x][y];
        }
    }
    cout << endl;
    
    for (int x = 0; x < rows2; ++x)
    {
        cout << "You're currently entering the elements of row " << x + 1 << " of the second matrix.\n";
        for (int y = 0; y < columns2; ++y)
        {
            cin >> matrix2[x][y];
        }
    }
    cout << endl;
    
    matrixMult(matrix1, matrix2, newMatrix, rows1, columns1, columns2);
    
    for (int x = 0; x < rows1; ++x)
    {
        for (int y = 0; y < columns2; ++y)
        {
            cout << newMatrix[x][y] << " ";
        }
        cout << endl;
    }

    return 0;
}
