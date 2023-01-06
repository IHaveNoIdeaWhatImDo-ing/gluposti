#include <iostream>

using namespace std;

bool palindrome(char* str, int length, int originalLength)
{
    if (str[0] != str[length - 1])
        return false;
    else if (length == originalLength / 2)
        return true;
    
    palindrome(str + 1, length - 2, length);
}

int main()
{
    cout << palindrome("abcddcba", 8, 8);

    return 0;
}
