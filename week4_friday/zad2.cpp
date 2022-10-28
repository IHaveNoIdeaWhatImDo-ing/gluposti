#include <iostream>

using namespace std;

int main()
{
    unsigned short digit;
    cout << "Enter a digit: ";
    cin >> digit;
    
    unsigned short circles = 0;
    string name;
    bool error = false;
    
    switch (digit)
    {
        case 1:
            name = "one";
        break;
        case 2:
            name = "two";
        break;
        case 3:
            name = "three";
        break;
        case 4:
            name = "four";
        break;
        case 5:
            name = "five";
        break;
        case 6:
            name = "six";
            circles = 1;
        break;
        case 7:
            name = "seven";
        break;
        case 8:
            name = "eight"; 
            circles = 2;
        break;
        case 9:
            name = "nine";
            circles = 1;
        break;
        case 0:
            name = "zero";
            circles = 1;
        break;
        default:
            error = true;
        break;
    }
    
    if (!error)
    {
        cout << "The given digit is \"" << name << "\" and it has " << circles << " circles.";
    }
    else
    {
        cout << "Incorrect input.";
    }

    return 0;
}
