#include <iostream>

using namespace std;

const int MAX_SZIE = 100;

int length (char*& str)
{
    int counter = 0;
    while (str[counter++] != '\0') {}
    
    return counter - 1;
}

char* stringCopy (char*& str)
{
    int len = length(str);
    char* newStr = new char[len];
    
    for (int i = 0; i < len; ++i)
    {
        newStr[i] = str[i];
    }
    
    return newStr;
}

int main()
{
    char* str;
    cout << "Enter a string to copy: ";
    cin >> str;
    
    char* copy = stringCopy(str);
    
    cout << '\n' << copy;
    
    delete[] copy;
    delete[] str;

    return 0;
}
