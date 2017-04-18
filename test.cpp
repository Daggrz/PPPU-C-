#include "std_lib_facilities.h"

int main()
{
  string s;
  cout << "Please enter a string: ";
  cin >> s;

  for(char c : s) {
    cout << c << endl;
  }
}
