#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  char op;
  double n1, n2;
  cout << "Please enter an operator followed by two numbers.\n"
       << "Example: + 1 2: ";
  cin >> op >> n1 >> n2;
  if (op == '+') {
    cout << "Result: " << n1 + n2 << endl;
  } else if (op == '-') {
    cout << "Result: " << n1 - n2 << endl;
  } else if (op == '*') {
    cout << "Result: " << n1 * n2 << endl;
  } else if (op == '/') {
    cout << "Result: " << n1 / n2 << endl;
  }
}
