#include "std_lib_facilities.h"

int main() {
  cout << "Please enter your full name and age.\n";
  int age;
  string fname;
  string mname;
  string lname;
  cin >> fname >> mname >> lname;
  cin >> age;
  double months = age * 12;
  cout << "Hello, " << fname << " " << mname << " " << lname
       << " (age " << age << "years or " << months << " months)\n";
  cin.get();
}

