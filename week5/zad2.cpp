#include <iostream>

using namespace std;

int main ()
{
  int n, m;
  cout << "Enter a width and a height: ";
  cin >> n >> m;
  string character = "ඞ ";
  
  for (int y = 0; y < m; ++y)
  {
    for (int x = 0; x < n; ++x)
    {
      cout << character;
    }
    cout << "\n";
  }
}
