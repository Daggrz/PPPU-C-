#include "std_lib_facilities.h"

int main()
{
  cout << "Enter the name of the person you want to write to (followed by enter): ";
  string fstName;
  cin >> fstName;
  cout << "Dear " << fstName << ",\n";
  cout << "  How have you been lately? I have been rather busy.\n\n";
  cout << "Please enter the name of a friend: ";
  string fndName;
  cin >> fndName;
  cout << "Have you seen " << fndName << " lately?\n";
  string mOrF = "0";
  cout << "Are they male or female (m/f)? ";
  bool sw = true;
  while (sw) {
    cin >> mOrF;
    if (mOrF == "m") {
      cout << "Well if you see him, let me know.\n";
      sw = false;
    } else if (mOrF == "f") {
      cout << "Well if you see her, let me know.\n";
      sw = false;
    } else {
      cout << "please enter an m or an f\n";
    }
  }
  int age;

  cout << "Please enter your age :";
  cin >> age;

  if (age < 0 || age > 110) {
    cout << "you're kidding!";
  } else if (age < 12) {
    cout << "Next year you will be " << age + 1;
  } else if (age == 17) {
    cout << "Next year you will be able to vote.\n";
  } else if (age > 70) {
    cout << "I hope your enjoying retirement.\n";
  }

  cout << "Yours sincerely,\n\n\n" << "Sean Gordon";

}
