#include "std_lib_facilities.h"

using namespace std;

int main() {
  int n = -1;
  string s = "";
  int aN[10] = {0,1,2,3,4,5,6,7,8,9};
  vector<string> nums = {"zero","one","two","three","four","five","six","seven","eight","nine"};
  cout << "Please enter an integer (1-9), or a text form of that number in undercase: ";
  for (;;) {
    if (cin >> n) {
      if (n != -1) {
	switch (n) {
	case 0: {
	  cout << nums[n]<< endl;
	  n = -1;
	  break;
	}
	case 1: {
	  cout << nums[n]<< endl;
	  n = -1;
	  break;
	}
	case 2: {
	  cout << nums[n]<< endl;
	  n = -1;
	  break;
	}
	case 3: {
	  cout << nums[n]<< endl;
	  n = -1;
	  break;
	}
	case 4: {
	  cout << nums[n]<< endl;
	  n = -1;
	  break;
	}
	case 5: {
	  cout << nums[n]<< endl;
	  n = -1;
	  break;
	}
	case 6: {
	  cout << nums[n]<< endl;
	  n = -1;
	  break;
	}
	case 7: {
	  cout << nums[n]<< endl;
	  n = -1;
	  break;
	}
	case 8: {
	  cout << nums[n]<< endl;
	  n = -1;
	  break;
	}
	case 9: {
	  cout << nums[n]<< endl;
	  n = -1;
	  break;
	}
	default: {
	  cout << "Integer is not in range 1-9.\n";
	  n = -1;
	  break;
	} 
	}
      }
    }
    if (s != "") {
      for (unsigned long i = 0; i <= 9; i++) {
	if (s == nums[i]) {
	  cout << i << endl;
	  s = "";
	} else {
	  cout << "That is not a number I've heard of.\n";
	  s = "";
	}
      }
    }
  }
}
