#include "std_lib_facilities.h"

int main()
{

  double nL = 0;
  double nS = 0;
  double num;
  while(cin >> num) {
    if(nL == 0 && nS ==0) {
      nL = num;
      nS = num;
    } else if(num < nS) {
      cout << num << " is the smallest so far.\n";
      nS = num;
    } else if(num > nL) {
      cout << num << " is the largest so far.\n";
      nL = num;
    } else {
      cout << num << endl;
    }
  }

}
