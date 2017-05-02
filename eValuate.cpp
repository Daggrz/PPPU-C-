#include "std_lib_facilities.h"

int main()
{
  cout << "Please enter two values seperated with a space\n";

  double val1;
  double val2;

  cin >> val1 >> val2;

  if (val1 > val2) {
    cout << val1 << " > " << val2 << endl;
    cout << "Sum: " << val1 + val2 << endl;
    cout << "Product: " << val1 * val2 << endl;
    cout << "Diff: " << val1 - val2 << endl;
    cout << "Ratio: " << val2 / val1 << endl;
  } else if (val1 < val2) {
    cout << val2 << " > " << val1 << endl;
    cout << "Sum: " << val1 + val2 << endl;
    cout << "Product: " << val1 * val2 << endl;
    cout << "Diff: " << val2 - val1 << endl;
    cout << "Ratio: " << val1 / val2 << endl;
  } else if (val1 == val2) {
    cout << val1 << " = " << val2 << endl;
    cout << "Sum: " << val1 + val2 << endl;
    cout << "Product: " << val1 * val2 << endl;
    cout << "Diff: 0" << endl;
    cout << "Ratio: 1" << endl;
  }
}
