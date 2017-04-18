#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  int num;
  cout << "Please enter an integer: ";
  cin >> num;
  if (num % 2 == 1) {
    cout << "\nThe number " << num << " is odd.\n";
  } else {
    cout << "\nThe number " << num << " is even.\n";
  }
}
