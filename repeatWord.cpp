#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

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
