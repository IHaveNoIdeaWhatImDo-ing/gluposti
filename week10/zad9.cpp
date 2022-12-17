#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int length (char*& str)
{
    int i = 0;
    while (str[i++] != '\0') {}
    
    return i - 1;
}

char* subString (char*& str, int& start, int& end)
{
    int len = length(str);
    if (start < 0 || start >= len || end < 0 || end >= len)
    {
        cout << "Incorrect indexes.";
        return NULL;
    }
    
    int i = 0;
    char* newStr = new char[end - start];
    
    for (int i = start; i < end; ++i)
    {
        newStr[i - start] = str[i];
    }
    
    return newStr;
}

int main()
{
    char* str = new char[MAX_SIZE];
    int start, end;
    cout << "Enter the message: ";
    cin >> str;
    cout << "Enter the start index: ";
    cin >> start;
    cout << "Enter the end index: ";
    cin >> end;
    
    char* newStr = subString(str, start, end);
    
    cout << '\n' << newStr;
    
    delete[] str;
    delete[] newStr;
    
    return 0;
}
