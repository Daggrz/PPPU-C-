#include "std_lib_facilities.h"

void transpose (string& str1, string& str2) {
  string nR;
  nR = str2; 
  str2 = str1;
  str1 = nR;
}

int main() {
  string n1;
  string n2;
  string n3;
  cout << "Please enter three names seperated by spaces.\n";
  cin >> n1 >> n2 >> n3;

  // Possible outcomes: ABC ACB
  //                    BAC BCA
  //                    CAB CBA

  for (;;) {
    if (n1 > n2) {		// change BAC CAB or CBA
      transpose(n1, n2);	// into   ABC ACB or BCA
    } else if (n2 > n3) {	// change ACB or BCB
      transpose(n2, n3);	// into   ABC or BAC
    } else break;
  }
  
  cout << "The names in order are " << n1 << ", " << n2 << ", " << n3 << ".\n";
}
