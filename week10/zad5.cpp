#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int length (char*& str)
{
    int counter = 0;
    while (str[counter++] != '\0') {}
    
    return counter - 1;
}

void reverse (char*& str, int& len)
{
    for (int i = 0; i < len / 2; ++i)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main()
{
    char* str = new char[MAX_SIZE];
    cin >> str;
    
    int len = length(str);
    reverse(str, len);
    
    cout << str;
    
    return 0;
}
