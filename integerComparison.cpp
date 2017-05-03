#include "std_lib_facilities.h"

int main()
{
  double val1;
  double val2;
  cout << "Please enter two decimal values seperated by a space.\n";
  cin >> val1 >> val2;
  if (val1 > val2) {
    cout << "Sum   = " << val1 + val2 << endl;
    cout << "Prod  = " << val1 * val2 << endl;
    cout << "Diff  = " << val1 - val2 << endl;
    cout << "Ratio = " << val1 / val2 << endl;
  } else if (val2 > val1) {
    cout << "Sum   = " << val1 + val2 << endl;
    cout << "Prod  = " << val1 * val2 << endl;
    cout << "Diff  = " << val2 - val1 << endl;
    cout << "Ratio = " << val2 / val1 << endl;
  } else {
    cout << "Sum   = " << val1 + val2 << endl;
    cout << "Prod  = " << val1 * val2 << endl;
    cout << "Diff  = 0" << endl;
    cout << "Ratio = 1" << endl;
  }
}
