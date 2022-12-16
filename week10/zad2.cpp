#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int length (char*& str)
{
    int counter = 0;
    while (str[counter++] != '\0') {}
    
    return counter - 1;
}

char* stringConcat (char*& str1, char*& str2)
{
    int len1 = length(str1), len2 = length(str2);
    char* newStr = new char[len1 + len2];
    
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
    char* str1 = new char[MAX_SIZE];
    char* str2 = new char[MAX_SIZE];
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    
    char* concatinated = stringConcat(str1, str2);
    int len = length(concatinated);
    
    cout << '\n' << concatinated;
    
    delete[] concatinated;
    delete[] str1;
    delete[] str2;

    return 0;
}
