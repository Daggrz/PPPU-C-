#include "std_lib_facilities.h"

int main()
{
  cout << "Please enter a value in miles for conversion to Km: ";
  double miles;
  cin >> miles;
  cout << miles << " miles is " << miles * 1.609 << " kilometers.\n";
}
