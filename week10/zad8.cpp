#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int amountOfOccurences (char*& str, char& character)
{
    int i = 0, count = 0;
    while (str[i++] != '\0')
        if (str[i - 1] == character)
            count++;
    
    return count;
}

int main()
{
    char* str = new char[MAX_SIZE];
    char character, replacement;
    cout << "Enter the message: ";
    cin >> str;
    cout << "Enter the character to seek: ";
    cin >> character;
    
    int index =  amountOfOccurences(str, character);
    
    cout << '\n' << index;
    
    delete[] str;
    
    return 0;
}
