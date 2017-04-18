#include "std_lib_facilities.h"

int main() {

  constexpr double y = 108.64;
  constexpr double k = 7.01;
  constexpr double p = 0.80;
  double val;
  char cur;
  cout << "\nPlease enter an amount of currency followed by a character\n"
       << "representing the type ('y'en, 'k'roner, or 'p'ounds): ";
  cin >> val >> cur;

  switch (cur) {
  case 'y': {
    cout << val << " yen is $" << setprecision(to_string(int(val/y)).length()+2) << val/y << "\n";
    break;
  }
  case 'k': {
    cout << val << " kroner is $" << setprecision(to_string(int(val/k)).length()+2) << val/k << "\n";
    break;
  }
  case 'p': {
    cout << val << " pounds is $" << setprecision(to_string(int(val/p)).length()+2) << val/p << "\n";
    break;
  }
  default:
    cout << cur << " is not a currency I know.\n";
    break;
  }

}
