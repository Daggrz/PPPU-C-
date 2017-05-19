#include "std_lib_facilities.h"
#include "my_lib.h"

void stringToInt(string s, int &n);

int main() {
  char op;
  string n1, n2;
  int i1, i2 = 4;
  cout << "Please enter an expression with two integers (0-9) in word or digit form.\n"
       << "Example: 1 + 2 OR ten / two: ";
  while (cin >> n1 >> op >> n2) {
    if (op == '+') {
      stringToInt(n1, i1);
      stringToInt(n2, i2);
      cout << "Result: " << i1 + i2 << endl;
    } else if (op == '-') {
      stringToInt(n1, i1);
      stringToInt(n2, i2);
      cout << "Result: " << i1 - i2 << endl;
    } else if (op == '*') {
      stringToInt(n1, i1);
      stringToInt(n2, i2);
      cout << "Result: " << i1 * i2 << endl;
    } else if (op == '/') {
      stringToInt(n1, i1);
      stringToInt(n2, i2);
      cout << "Result: " << i1 / i2 << endl;
    }
  }
}

