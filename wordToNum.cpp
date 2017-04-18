#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  string num;
  cout << "Please enter an number in word form.\n";
  cin >> num;
  if (num == "zero") {
    cout << "0\n";
  } else if (num == "one") {
    cout << "1\n";
  } else if (num == "two") {
    cout << "2\n";
  } else if (num == "three") {
    cout << "3\n";
  } else if (num == "four") {
    cout << "4\n";
  } else cout << "That is not a number I've heard of.\n";
}
