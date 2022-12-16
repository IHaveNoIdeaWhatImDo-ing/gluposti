#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int length (char*& str)
{
    int counter = 0;
    while (str[counter++] != '\0') {}
    
    return counter - 1;
}

int main()
{
    char* str = new char[MAX_SIZE];
    cout << "Enter a string: ";
    cin >> str;
    
    cout << '\n' << length(str);
    
    delete[] str;

    return 0;
}
