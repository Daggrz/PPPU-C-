#include "std_lib_facilities.h"

int main()
{
  vector<string> cWords = {"carrot",
			   "carrots",
			   "Carrot",
			   "Carrots",
			   "onion",
			   "onions",
			   "Onion",
			   "Onions"
  };
  vector<string> words;

  for (string s; cin >> s;)
    words.push_back(s);

  for (unsigned long i = 0; i < words.size(); ++i) {
      for (string cWord : cWords) {
      if (words[i] == cWord) {
	words[i] = "BLEEP";
      }
    }
  }

  cout << "Censored version:\n" ;
  for (string word : words) {
    cout << word << ' ';
  }
  cout << endl;
}
