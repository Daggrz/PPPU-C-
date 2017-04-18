#include "std_lib_facilities.h"

int main()
{
  for (int i = 0; i < 256 ; i++) {
    char c = i;
    if (i == 8) {
      cout << "Bullet\t" << i << endl;
    } else if (i == 9) {
      cout << "Tab\t" << i << endl;
    } else if (i == 10) {
      cout << "Newline\t" << i << endl;
    } else if (i == 13) {
      cout << "Return\t" << i << endl;
    } else if (i == 32) {
      cout << "Space\t" << i << endl;
    } else {
      cout << char(i) << "\t" << i << endl;
    }
  }
}
