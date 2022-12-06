#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void stuff (char* word)
{ 
    for (int i = 0; word[i] != '\0'; ++i)
    {
        if (word[i] >= 'a' || word[i] <= 'z')
            word[i] -= 32;
        else if (word[i] >= 'A' || word[i] <= 'Z')
            word[i] += 32;
        else if (!(word[i] < 'a' && word[i] > 'z' && word[i] < 'A' && word[i] > 'Z'))
            word[i] = '#';
    }
}
    
int main()
{
    int N;
    do {
        cout << "Enter valid length for a word: ";
        cin >> N;
    } while (N <= 0 || N > MAX_SIZE);
    
    char* word = new char[N + 1];
    cin.ignore().getline(word, N + 1);
    
    stuff(word);
    
    cout << "\n" << word;
    
    delete[] word;

    return 0;
}
