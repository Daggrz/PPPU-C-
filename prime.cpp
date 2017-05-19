#include "std_lib_facilities.h"
#include "my_lib.h"

bool isPrime(int i);

int main()
{
  int max;
  cout << "Please enter a number of prime numbers to show: ";
  cin >> max;
  int n = 0;
  while(n < max) {
    int i = 1;
    for(;;) {
      if(isPrime(i)) {
	cout << i << endl;
	n++;
      }
      if(n > max) break;
      i++;
    }
  }
}
