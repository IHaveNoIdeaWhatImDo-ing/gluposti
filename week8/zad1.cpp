#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int min (int num1, int num2)
{
    return (num1 <= num2 ? num1 : num2);
}

int similarity (double matrix[][MAX_SIZE], double array[MAX_SIZE], int column, int smaller)
{
    for (int i = 0; i < smaller; ++i)
    {
        if (matrix[i][column] != array[i])
            return i;
    }
    
    return smaller;
}

int main()
{
    int M, N;
    do {
        cout << "Enter a valid matrix width: ";
        cin >> M;
    } while (M <= 0 || M > MAX_SIZE);
    
    do {
        cout << "Enter a valid array length: ";
        cin >> N;
    } while (N <= 0 || N > MAX_SIZE);
    
    int smaller = min(M, N);
    
    double matrix[5][MAX_SIZE],
           arr[MAX_SIZE];
    
    cout << "\nEnter the matrix\' values: " << endl;
    for (int x = 0; x < M; ++x)
    {
        cout << "Entering the elements of row number " << x << "." << endl;
        for (int y = 0; y < 5; ++y)
        {
            cin >> matrix[x][y];
        }
    }
    
    cout << "Enter the array's elements: " << endl;
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }
    
    cout << "\n" << similarity(matrix, arr, 1, smaller) << "\n\n";
    
    int largest = 0, index = 0;
    for (int i = 0; i < 5; ++i)
    {
        int column_similarity = similarity(matrix, arr, i, smaller);
        if (column_similarity > largest)
        {
            largest = column_similarity;
            index = i;
        }
    }
    cout << "The largest amount of similar elements is " << largest << ", on column " << index << ".\n";
    
    for (int i = index + 1; i < 5; ++i)
    {
        int column_similarity = similarity(matrix, arr, i, smaller);
        if (column_similarity == largest)
        {
            cout << "The largest amount of similar elements is " << column_similarity << ", on column " << i << ".\n";
        }
    }

    return 0;
}
