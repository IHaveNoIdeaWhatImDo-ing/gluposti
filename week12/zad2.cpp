#include <iostream>

const int MAX_SIZE = 256;

using namespace std;

void capitalize (char*& str)
{
    int i = -1;
    
    while (str[++i] != '\0')
    {
        if (str[i] >= 'a' && str[i] < 'z')
            str[i] -= 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
}

int main()
{
    char* str = new char[MAX_SIZE];
    cin.getline(str, MAX_SIZE);
    
    capitalize(str);
    
    cout << str;
    
    delete[] str;

    return 0;
}
