#include "std_lib_facilities.h"

int main()
{
  int numWords = 0;
  string pre = "";
  string cur;
  while (cin>>cur) {
    ++numWords;
    if (cur==pre) {
      cout << "word number: " << numWords << " repeated word: " << cur << "\n";
    }
    pre = cur;
  }
  return 0;
}
