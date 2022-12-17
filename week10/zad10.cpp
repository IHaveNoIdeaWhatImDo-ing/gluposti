#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int length (char*& str)
{
    int i = 0;
    while (str[i++] != '\0') {}
    
    return i - 1;
}

bool isSubString (char*& str, char*& subStr)
{
    int len1 = length(str), len2 = length(subStr);
    if (len2 > len1)
    {
        cout << '\n' << "The second string is larger than the first." << '\n';
        return 0;
    }
    
    bool isSubStr;
    for (int i = 0; i <= len1 - len2; ++i)
    {
        isSubStr = 1;
        for (int a = i; a < len2 + i; ++a)
        {
            if (str[a] != subStr[a - i])
            {
                isSubStr = 0;
                break;
            }
        }
        
        if (isSubStr) return 1;
    }
    
    return 0;
}

int main()
{
    char* str = new char[MAX_SIZE];
    char* subStr = new char[MAX_SIZE];
    cout << "Enter the first string: ";
    cin >> str;
    cout << "Enter the second string: ";
    cin >> subStr;
    
    bool isSubStr = isSubString(str, subStr);
    
    cout << '\n' << "The seconds string " << (isSubStr ? "is" : "is not") << " a substring of the first.";
    
    delete[] str;
    delete[] subStr;
    
    return 0;
}
