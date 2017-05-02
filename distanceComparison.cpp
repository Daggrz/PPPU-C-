#include "std_lib_facilities.h"

int main() {
  
  double dL = 0;
  double dS = 0;
  double dst;
  double sum = 0;
  vector<double> dsts;
  
  while(cin >> dst) {
    if (dst < dS) {
      if (dL == 0) dL = dst;
      dS = dst;
      sum += dst;
      dsts.push_back(dst);
    } else if (dst > dL) {
      if (dS == 0) dS = dst;
      dL = dst;
      sum += dst;
      dsts.push_back(dst);
    } 
  }

  cout << "Largest Distance: " << dL << endl;
  cout << "Smallest Distance: " << dS << endl;
  cout << "Mean Distance: " << sum/dsts.size() << endl;
}
