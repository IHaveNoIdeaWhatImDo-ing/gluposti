#include <iostream>
#include <cmath>

using namespace std;

const int MAX_SIZE = 100;

double validCharacters (string& str)
{
    double counter = 0;
    for (int i = 0; i < str.length(); ++i)
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
            counter++;
    
    return counter;
}

void flip (char matrix[][MAX_SIZE], int& key, int& rows)
{
    char bufferMatrix[MAX_SIZE][MAX_SIZE];
    
    for (int y = 0; y < key; ++y)
    {
        for (int x = 0; x < rows; ++x)
        {
            bufferMatrix[y][rows - x - 1] = matrix[x][y];
        }
    }
    
    for (int x = 0; x < key; ++x)
    {
        for (int y = 0; y < rows; ++y)
        {
            matrix[x][y] = bufferMatrix[x][y];
        }
    }
    int temp = rows;
    rows = key;
    key = temp;
}

void copyMessageToMatrix (string& message, char matrix[][MAX_SIZE], int& key, int& rows, bool& positive)
{
    int length = message.length(), index = 0, x = 0, y = 0;
    for (int i = 0; i < length; ++i)
    {
        if ((message[i] >= 'a' && message[i] <= 'z') || (message[i] >= '0' && message[i] <= '9'))
        {
            // Превръщам индекса на едномерния масив във x и y индекси на двумерен масив
            x = index / key,
            y = index % key;
            index++;
            
            if (positive)
                matrix[x][y] = toupper(message[i]);
            else
                matrix[key - x - 1][rows - y - 1] = toupper(message[i]);
            
            // Fix the negative key thing
        }
    }
    
    // Допопълвам празните елементи, ако има
    for (int w = x; w < rows; ++w)
    {
        for (int h = y; h < key; ++h)
        {
            if (matrix[w][h] == 0)
            {
                if (positive)
                    matrix[w][h] = 'X';
                else
                    matrix[rows - w - 1][key - h - 1] = 'X';
            }
        }
    }
}

string encrypt (char matrix[][MAX_SIZE], int& key, int& rows)
{
    string encryptedStr = "";
    
    int layer, smaller = (key > rows ? rows : key);
    for (layer = 0; layer < smaller / 2; ++layer)
    {
        for (int rotation = 0; rotation < 4; ++rotation)
        {
            for (int i = layer; i < rows - 1 - layer; ++i)
            {
                encryptedStr += matrix[i][layer];
            }
            flip(matrix, key, rows);
        }
    }
    
    if (smaller % 2 != 0)
    {
        for (int i = layer; i < rows - layer; ++i)
        {
            encryptedStr += matrix[i][layer];
        }
    }
    
    return encryptedStr;
}

int main()
{
    int key;
    cout << "Input the cypher key: ";
    cin >> key;
    bool positive = key > 0;
    key = abs(key);
    
    string message;
    cin.ignore();
    getline(cin, message);
    
    int rows = ceil(validCharacters(message) / key);
    char matrix[MAX_SIZE][MAX_SIZE];
    
    copyMessageToMatrix(message, matrix, key, rows, positive);
    
    for (int x = 0; x < rows; ++x)
    {
        for (int y = 0; y < key; ++y)
        {
            cout << matrix[x][y] << " ";
        }
        cout << '\n';
    }
    
    string encryptedMessage = encrypt(matrix, key, rows);
    
    cout << '\n' << encryptedMessage;
    
    return 0;
}
