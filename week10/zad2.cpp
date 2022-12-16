#include <iostream>

using namespace std;

int length (string str)
{
    int counter = 0;
    while (str[counter++] != '\0') {}
    
    return counter - 1;
}

char* stringCopy (string& str1, string& str2)
{
    int len1 = length(str1), len2 = length(str2);
    char* newStr = new char[len1 + len2 + 1];
    
    int i;
    for (i = 0; i < len1; ++i)
    {
        newStr[i] = str1[i];
    }
    
    for (; i < len1 + len2; ++i)
    {
        newStr[i] = str2[i - len1];
    }
    
    return newStr;
}

int main()
{
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);
    
    char* concatinated = stringCopy(str1, str2);
    int len = length(concatinated);
    
    cout << '\n' << concatinated;
    
    delete[] concatinated;

    return 0;
}
