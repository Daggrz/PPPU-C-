#include "std_lib_facilities.h"

int main()
{
  vector<double> temps;

  cout << "Please enter a series of tempratures terminated by a non-numerical character:\n";
  
  for (double temp; cin >> temp;) {
    temps.push_back(temp);
  }


  sort(temps);
  
  cout << "Your tempratures:\n";

  for (double temp : temps) {
    cout << temp << endl;
  }

  double sum = 0;
  for (double temp : temps) {
    sum += temp;
  }

  cout << "Your average: " << sum/temps.size() << endl;

  sort(temps);
  cout << "Median temprature: ";
  if (temps.size()%2 == 0) {
    cout << temps[(temps.size()/2 - 1)] + ((temps[temps.size()/2] - temps[(temps.size()/2 - 1)])/2) << endl;
  } else {
    cout << temps[temps.size()/2] << endl;
  }
}
