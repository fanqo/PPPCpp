#include <iostream>
#include <fstream>
#include <string>
#include <set>

using namespace std;
int main()
{
  string from, to;
  cin >> from >> to;    // get source and target file names

  ifstream is {from};   // open input stream
  ofstream os {to};     // open output stream

  istream_iterator<string> ii {is};    // make input iterator for stream
  istream_iterator<string> eos;    // input sentinel
  ostream_iterator<string> oo {os, "\n"};  // make output iterator for stream

  set<string> b {ii, eos};  // b is a vector initialized from input
  copy(b.begin(), b.end(), oo);  // copy buffer to output
}

