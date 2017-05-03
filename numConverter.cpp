#include "std_lib_facilities.h"

int main() {
  string s = "";
  vector<string> nums = {"zero","one","two","three","four","five","six","seven","eight","nine"};
  cout << "Please enter an integer (1-9), or a word form of that number in undercase: ";
  bool notWord = true;
  bool notChar = true;
  while (cin >> s) {
    for (int i = 0; i < 10; ++i) { 			          // for numbers 0 through 9
      if (s == nums[i]) {	                                  // if string is a number in word form
	cout << i << endl;
	notWord = false;
      } else if (atoi(s.c_str()) == i && s.length() == 1) {       // if string is in integer form
	cout << nums[i] << endl;
	notChar = false;
      }
    }
    
    if (s.length() > 1 && notWord) {
      if(atoi(s.c_str()) > 9) {
	cout << "Number too high.\n";
      } else if (atoi(s.c_str()) < 0) {
	cout << "Number too low.\n";
      } else cout << "I don't recognize that word as a number.\n";
    } else if (s.length() == 1 &&notChar){
      cout << "I don't recognize that character as a number.\n";
    }

    notWord = true;
    notChar = true;
  }
}
