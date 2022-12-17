#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int seekChar (char*& str, char& character)
{
    int i = 0;
    while (str[i++] != '\0')
        if (str[i - 1] == character)
            return i - 1;
    
    return -1;
}

int main()
{
    char* str = new char[MAX_SIZE];
    char character, replacement;
    cout << "Enter the message: ";
    cin >> str;
    cout << "Enter the character to seek: ";
    cin >> character;
    
    int index =  seekChar(str, character);
    
    cout << '\n' << index;
    
    delete[] str;
    
    return 0;
}
