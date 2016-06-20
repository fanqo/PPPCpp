//
#include "../../std_lib_facilities.h"
vector<string> nouns {"birds", "fish", "C++"}; // nouns
vector<string> verbs {"rules", "fly", "swim"}; // verbs
vector<string> conjs {"and", "or", "but"};     // conjunctions

bool is_noun(string s)
{
  for (int i = 0; i < nouns.size(); ++i)
    if (s == nouns[i])
      return true;
  return false;
}

bool is_verb(string s)
{
  for (int i = 0; i < verbs.size(); ++i)
    if (s == verbs[i])
      return true;
  return false;
}

bool is_conj(string s)
{
  for (int i = 0; i < conjs.size(); ++i)
    if (s == conjs[i])
      return true;
  return false;
}

bool is_the(string s)
{
  if (s == "the")		// is "the", ignore it
    cin >> s;
  return is_noun(s);
}

bool sentence()
{
  string s;
  cin >> s;
  if (!is_the(s)) return false; // noun goes first, maybe a "the" before noun

  cin >> s;
  if (!is_verb(s)) return false; // verb goes second

  cin >> s;
  if (s == ".") return true;	// a sentence
  if (!is_conj(s)) return false;

  return sentence();
}

int main()
  try{
    bool b = false;		// is not a complete sentence
    while (cin) {
      b = sentence();
      if (b)
	cout << "  OK\n";
      else
	cout << "  not OK\n"
	     << "  Tray again\n";
    }
  }
  catch(exception& e) {
    cerr << "Error: " << e.what() <<'\n';
  }
		
