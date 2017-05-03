#include "std_lib_facilities.h"

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

void stringToInt(string s, int &n) {
  bool isNum = false;
  bool isWrd = false;
  vector<string> nums = {"zero","one","two","three","four","five","six","seven","eight","nine"};
  for (int i = 0; i < 10; i++) {
    if(s == nums[i]) {
      n = i;
      isWrd = true;
    } else if(atoi(s.c_str()) == i && s.length() == 1) {
      n = i;
      isNum = true;
    }
  }
  if(s.length() > 1 && !isWrd) {
    if(atoi(s.c_str()) > 9) {
      cout << s << " is greater than 9 setting integer to 9.\n";
      n = 9;
    } else if(atoi(s.c_str()) < 0) {
      cout << s << " is less than 0 setting integer to 0.\n";
      n = 0;
    } else {
      cout << "I don't recognize the word " << s << " as a number.\n"
	   << "Setting the integer to four by default.\n";
      n = 4;
    }
  } else if (s.length() == 1 && !isNum) {
    cout << "I don't recognize that character as a number.\n"
	 << "Setting the integer to four by default.\n";
    n = 4;
  }
}
