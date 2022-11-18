#include <iostream>

using namespace std;

int ARR_SIZE = 100;

int main()
{
    char arr[ARR_SIZE];
    
    cin.getline(arr, ARR_SIZE);
    
    int length = 0;
    for (int i = 0; i < ARR_SIZE; ++i)
    {
        if (arr[i] != '\0')
          length++;
         else
            break;
    }
  
    cout << length;

    return 0;
}
