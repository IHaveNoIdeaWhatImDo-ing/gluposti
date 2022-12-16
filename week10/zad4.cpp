#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int length (char*& str)
{
    int counter = 0;
    while (str[counter++] != '\0') {}
    
    return counter - 1;
}

int stringCompare (char*& str1, char*& str2, int& len1, int& len2)
{
    int smaller = (len1 > len2 ? len2 : len1);
    
    for (int i = 0; i < smaller; ++i)
    {
        if (str1[i] > str2[i])
            return 1;
        else if (str1[i] < str2[i])
            return -1;
    }
    
    if (len1 > len2)
        return 1;
    else if (len1 < len2)
        return -1;
    else
        return 0;
}

int main()
{
    char* str1 = new char[MAX_SIZE];
    char* str2 = new char[MAX_SIZE];
    cin >> str1;
    cin >> str2;
    int len1 = length(str1), len2 = length(str2);
    
    cout << stringCompare(str1, str2, len1, len2);
    
    delete[] str1;
    delete[] str2;

    return 0;
}
