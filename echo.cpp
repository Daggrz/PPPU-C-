#include "std_lib_facilities.h"

void checkNum(double &nL, double &nS, double num, double oNum, string unt) {
    if (num < nS) {
      cout << oNum << " " << unt << " is the smallest so far.\n";
      if (nL == 0) nL = num;
      nS = num;
    } else if (num > nL) {
      cout << oNum << " " << unt << " is the largest so far.\n";
      if (nS == 0) nS = num;
      nL = num;
    } else {
      cout << oNum << " " << unt << endl;
      nL = num;
      nS = num;
    }
}

int main()
{
  double nL = 0;
  double nS = 0;
  double num;
  int numNum = 0;
  vector<double> nums;
  double totIn = 0;
  string unt;
  while(cin >> num >> unt) {
    if(unt == "cm") {
      double oNum = num;
      num = oNum/2.54;
      checkNum(nL,nS,num,oNum,unt);
      totIn += num;
      nums.push_back(num);
      numNum++;
    } else if (unt == "m") {
      double oNum = num;
      num = (oNum*100)/2.54;
      checkNum(nL,nS,num,oNum,unt);
      totIn += num;
      nums.push_back(num);
      numNum++;
    } else if (unt == "ft") {
      double oNum = num;
      num = oNum * 12;
      checkNum(nL,nS,num,oNum,unt);
      totIn += num;
      nums.push_back(num);
      numNum++;
    } else if (unt == "in") {
      checkNum(nL,nS,num,num,unt);
      totIn += num;
      nums.push_back(num);
      numNum++;
    } else {
      cout << "I don't recognize " << unt << " as a unit.\n";
    }
  }

  cout << "Smallest number: " << nS << endl;
  cout << "Largest number: " << nL << endl;
  cout << "Number of numbers: " << numNum << endl;
  cout << "Sum in Inches: " << totIn << endl;
  cout << "Sum in Meters: " << (totIn*2.54)/100 << endl << endl;

  cout << "Numbers entered (sorted): \n";
  sort(nums);
  for(double n : nums) {
    cout << n << endl;
  }
}
