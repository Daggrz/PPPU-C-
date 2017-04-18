#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

void transpose (int& n1, int& n2) {
  int nR;
  nR = n2; 
  n2 = n1;
  n1 = nR;
}

int main() {
  int n1, n2, n3;
  cout << "Please enter three integer value seperated by spaces\n";
  cin >> n1 >> n2 >> n3;
  cout << "Your numbers: " << n1 << " " << n2 << " " << n3 << "\n";

  /*
    Example Input: 123 132
                   213 231
                   312 321
  */

  for (;;) {
    if (n1 > n2) {		// change 213 312 or 321
      transpose(n1, n2);	// into   123 132 or 231
    } else if (n2 > n3) {	// change 132 or 231
      transpose(n2, n3);	// into   123 or 213
    } else break;
  }
  cout << "Your numbers in order are " << n1 << " " << n2 << " " << n3 << "\n";
}
