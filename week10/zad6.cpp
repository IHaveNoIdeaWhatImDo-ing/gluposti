#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void replaceChar (char*& str, char& character, char& replacement)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == character)
            str[i] = replacement;
        
        i++;
    }
}

int main()
{
    char* str = new char[MAX_SIZE];
    char character, replacement;
    cout << "Enter the message: ";
    cin >> str;
    cout << "Enter the character to replace in the message: ";
    cin >> character;
    cout << "Enter a character to replace with in the message: ";
    cin >> replacement;
    
    replaceChar(str, character, replacement);
    
    cout << '\n' << str;
    
    delte[] str;
    
    return 0;
}
