#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  double d = 0 ;

  while (cin >> d) {
    int i = d;
    char c = i;
    int i2 = c;
    cout << "d==" << d << endl
	 << "i==" << i << endl
	 << "i2==" << i2 << endl
	 << "char(" << c << ")\n";
  }
}