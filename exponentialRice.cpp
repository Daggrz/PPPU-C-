#include "std_lib_facilities.h"

int main() {
  int riceAmounts[64] = {};
  for (int i = 0; i < 32; i++) {
    int currentRice = 1;
    int currentSquare = i+1;

    if (currentSquare > 1) {
      currentRice = riceAmounts[i]*2;
    }

    riceAmounts[currentSquare] = currentRice;
   
    cout << "Square: " << currentSquare << endl
	 << "Rice Grains: " << riceAmounts[i] << endl; 
  }
}
