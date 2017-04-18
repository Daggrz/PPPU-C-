#include "std_lib_facilities.h"

int square(int i) {
  int resInt = i;
  for (int n = 1; n < resInt; n++) {
    i += resInt;
  }
  return i;
}

int main()
{
  for (int i = 0; i < 100; i++) {
    cout << i << "\t" << square(i) << endl;
  }
}
