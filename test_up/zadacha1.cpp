#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void copy (int arr[][MAX_SIZE], int new_arr[][MAX_SIZE], int length)
{
    for (int x = 0; x < length; ++x)
    {
        for (int y = 0; y < length; ++y)
        {
            arr[x][y] = new_arr[length - x - 1][y];
        }
    }
}

void flipClockwise (int arr[][MAX_SIZE], int new_arr[][MAX_SIZE], int length)
{
    for (int x = 0; x < length; ++x)
    {
        for (int y = 0; y < length; ++y)
        {
            new_arr[y][x] = arr[x][y];
        }
    }
    copy(arr, new_arr, length);
}

int main()
{
    int size;
    do {
        cout << "Enter a valid size for the square matrix: ";
        cin >> size;
    } while (size <= 0 || size > MAX_SIZE);
    cout << "\n";

    int grid[MAX_SIZE][MAX_SIZE],
        grid2[MAX_SIZE][MAX_SIZE];

    for (int x = 0; x < size; ++x)
    {
        cout << "Currently inputting the elements of row " << x + 1 << ".\n";
        for (int y = 0; y < size; ++y)
        {
            cin >> grid[x][y];
        }
    }
    cout << "\n";

    for (int depth = 0; depth < size / 2; ++depth)
    {
        for (int i = 0; i < 4; ++i)
        {
            for (int x = depth; x < size - depth - 1; ++x)
            {
                cout << grid[depth][x] << " ";
            }
            flipClockwise(grid, grid2, size);
        }
    }

    return 0;
}
