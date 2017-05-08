#include "std_lib_facilities.h"

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

bool isPrime(int i){
  int primes[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}; // 26 primes (0-25)
  for(int p = 0; p < 25; p++) {
    if(i > primes[p]) {
      if(i % primes[p] == 0.0) {
	return false;
      } 
    }
  }
  return true;
}
