#include <iostream>
#include <string>
#include <vector>

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

bool isPrime(int i){
  int primes[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,
		    53, 59, 61, 67, 71, 73, 79, 83, 89, 97
  };		    // 25 primes (0-24)
  for(int p = 0; p < 25; p++) {
    if(i > primes[p]) {
      if(i % primes[p] == 0.0) {
	return false;
      } 
    }
  }
  return true;
}
