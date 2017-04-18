#include "std_lib_facilities.h"

int main() {
  int p, n, d, q, h, o;
  cout << "Please enter an amount of Pennies: ";
  cin >> p;
  cout << "Please enter an amount of Nickels: ";
  cin >> n;
  cout << "Please enter an amount of Dimes: ";
  cin >> d;
  cout << "Please enter an amount of Quarters: ";
  cin >> q;
  cout << "Please enter an amount of Half-Dollars: ";
  cin >> h;
  cout << "Please enter an amount of Full-Dollars: ";
  cin >> o;

  if (p == 1) cout << "You have " << p << " penny.\n";
  else cout << "You have " << p << " pennies.\n";
  if (n == 1) cout << "You have " << n << " nickel.\n";
  else cout << "You have " << n << " nickels.\n";
  if (d == 1) cout << "You have " << d << " dime.\n";
  else cout << "You have " << d << " dimes.\n";
  if (q == 1) cout << "You have " << q << " quarter.\n";
  else cout << "You have " << q << " quarters.\n";
  if (h == 1) cout << "You have " << h << " half-dollar.\n";
  else cout << "You have " << h << " half-dollars.\n";
  if (o == 1) cout << "You have " << o << " full-dollar.\n";
  else cout << "You have " << o << " full-dollar.\n";

  double t = o*100 + h*50 + q*25 + d*10 + n*5 + p;
  cout << "The value of your coins is " << t << " cents,\n"
       << "or $" << t/100 << ".\n";
}
