#include <iostream>

using namespace std;

int length (string str)
{
    int counter = 0;
    while (str[counter++] != '\0') {}
    
    return counter - 1;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    cout << '\n' << length(str);

    return 0;
}
