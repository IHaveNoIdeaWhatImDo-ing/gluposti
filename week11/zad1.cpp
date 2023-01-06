#include <iostream>

using namespace std;

double sumArray (double* array, int length, double sum = 0)
{
    if (length == 1)
        return sum;
    if (array[0] >= 0 && array[0] > array[1])
        sum += array[0];
    
    return sumArray(array + 1, length - 1, sum);
}

int main()
{
    double* arr = new double[7] {2, -1.9, 1.1, 3.5, 1, 0, 8.3};
    cout << sumArray(arr, 7) << '\n';

    return 0;
}
