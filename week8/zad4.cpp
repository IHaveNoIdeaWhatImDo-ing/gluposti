#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int diagonalSum (int matrix[][MAX_SIZE], int rows)
{
    int sum = 0;
    for (int x = 0; x < rows / 2; ++x)
    {
        sum += matrix[x][x] + matrix[rows - x - 1][x] + matrix[x][rows - x - 1] + matrix[rows - x - 1][rows - x - 1];
    }
    
    return (rows % 2 == 0 ? sum : sum + matrix[rows / 2][rows / 2]);
}

int main()
{
    int rows;
    
    do {
        cout << "Enter the rows to a square matrix: ";
        cin >> rows;
    } while ( rows <= 0 || rows > MAX_SIZE);
    
    int matrix[MAX_SIZE][MAX_SIZE];
        
    for (int x = 0; x < rows; ++x)
    {
        cout << "You're currently entering the elements of row " << x + 1 << ".\n";
        for (int y = 0; y < rows; ++y)
        {
            cin >> matrix[x][y];
        }
    }
    cout << endl;
    
    for (int x = 0; x < rows; ++x)
    {
        for (int y = 0; y < rows; ++y)
        {
            cout << matrix[x][y] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    cout << "The sum of diagonals is: " << diagonalSum(matrix, rows);

    return 0;
}
