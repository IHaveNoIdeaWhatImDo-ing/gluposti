#include <iostream>

using namespace std;

int ARR_SIZE = 100;

bool isPalindrome (char  arr[], int length)
{
    for (int i = 0; i < length / 2; ++i)
    {
        if (arr[i] != arr[length - i - 1])
            return false;
    }
    
    return true;
}

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
  
    cout << "The entered string " << (isPalindrome(arr, length) ? "is" : "is not") << " a palindrome.";

    return 0;
}
