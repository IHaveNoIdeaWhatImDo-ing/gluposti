#include <iostream>

using namespace std;

int rowSum (int**& matrix, int rowIndex, int& M)
{
    int sum = 0;
    
    for (int i = 0; i < M; ++i)
    {
        sum += matrix[rowIndex][i];
    }
    
    return sum;
}

void swapRow (int**& matrix, int rowIndex, int& M)
{
    for (int i = 0; i < M; ++i)
    {
        int temp = matrix[rowIndex][i];
        matrix[rowIndex][i] = matrix[rowIndex + 1][i];
        matrix[rowIndex + 1][i] = temp;
    }
}

int main()
{
    int N, M;
    do {
        cout << "Enter the rows and columns of the matrix: ";
        cin >> N >> M;
    } while (N <= 0 || M <= 0);
    
    int** matrix = new int*[N];
    for (int i = 0; i < N; ++i)
    {
        matrix[i] = new int[M];
    }
    
    for (int x = 0; x < N; ++x)
    {
        cout << "Inputting row " << x + 1 << '\n';
        for (int y = 0; y < M; ++y)
        {
            cin >> matrix[x][y];
        }
    }
    
    for (int x1 = 0; x1 < N - 1; ++x1)
    {
        for (int x2 = 0; x2 < N - 1; ++x2)
        {
            if (rowSum(matrix, x2, M) > rowSum(matrix, x2 + 1, M))
                swapRow(matrix, x2, M);
        }
    } cout << '\n';
    
    for (int x = 0; x < N; ++x)
    {
        for (int y = 0; y < M; ++y)
        {
            cout << matrix[x][y] << ' ';
        }
        cout << '\n';
    }
    
    for (int i = 0; i < N; ++i)
        delete[] matrix[i];
    delete[] matrix;

    return 0;
}
