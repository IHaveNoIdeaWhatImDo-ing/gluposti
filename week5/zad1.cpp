#include <iostream>

using namespace std;

int main ()
{
  int num;
  cout << "Enter a 2 digit number: ";
  
  do
  {
    cin >> num;
  }
  while (num < 10 || num > 99);
  
  cout << "The number you entered is: " << num << ".";
}
