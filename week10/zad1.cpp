#include <iostream>

using namespace std;

int length (string str)
{
    int counter = 0;
    while (str[counter++] != '\0') {}
    
    return counter - 1;
}

char* stringCopy (string& str)
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
    string str;
    cout << "Enter a string to copy: ";
    getline(cin, str);
    
    char* concatinated = stringCopy(str);
    
    cout << '\n' << concatinated;
    
    delete[] concatinated;

    return 0;
}
