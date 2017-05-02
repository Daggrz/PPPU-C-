#include "std_lib_facilities.h"

#include <chrono>
#include <thread>
#include <numeric>

int main() {
  char c;
  int guess = 100;
  bool poss[100];
  fill(poss, end(poss), true);
  cout << "Please think of a integer between 1 - 100.\n";

  this_thread::sleep_for(chrono::seconds(5));
  
  for(int sum = accumulate(poss, end(poss), 0); sum > 1;
      sum = accumulate(poss, end(poss), 0))
  {

    // TODO: logic for eliminating possibilities
    // To complicated for brute force
    // need to set a int to 100 will call it guess,
    // and only subtract from it when we
    // know that the actual number is less than
    // half of the guess at any given time
    // if the number is greater than half then we
    // check if the number is greater than 3/4 of
    // the guess and so on until we arrive at the number.
    //
    // if sum of is odd    FALSE   FALSE                      TRUE                  TRUE
    // if first digit odd  FALSE   TRUE                       TRUE                  FALSE 
    // if 0 in number      FALSE   if 9 FALSE                 if number > 40 TRUE
    // if first digit > 5  FALSE   if first digit > 4 FALSE
    // if second digit > 5 FALSE   if second digit > 4 FALSE


  }

  for(int i = 1; i <= 100; i++) {
    if(poss[i] == true)
      cout << "The number is " << i + 1 << ".\n";
  }
  
}
