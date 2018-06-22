#include <regex>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

// accept a pattern and a set of lines from input
// check the pattern and search for lines with that pattern

int main()
{
  regex pattern;

  string pat;
  cout << "enter pattern: ";

  getline(cin, pat);  // read pattern

  try {
    pattern = pat;  // this checks pat
    cout << "pattern: " << pat << endl;
  }
  catch (regex_error& e) {
    cerr << "regex error: " << e.what() << endl;
    exit(1);
  }

  cout << "now enter lines: \n";
  int lineno = 0;

  for (string line; getline(cin, line);){
    ++lineno;
    smatch matches;
    if (regex_search(line, matches, pattern)){
      cout << "line: " << lineno << ": " << line << '\n';
      for (int i = 0; i < matches.size(); ++i)
        cout << "\tmatches[" << i << "]:"
          << matches[i] << '\n';
    }
      else
        cout << "didn't match\n";
  }
}

