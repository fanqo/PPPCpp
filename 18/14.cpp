#include <iostream>

using namespace std;
bool is_palindrome(const char* first, const char* last)
  // first points to the first letter, last to the last letter
{
  while (first < last) {  // we haven't reached the middle
    if(*first != *last)  return false;
    return is_palindrome(first+1, last-1);
  }
  return true;
}

istream& read_word(istream& is, char* buffer, int max)
  // read at most max-1 characters from is into buffer
{
  is.width(max);  // read at most max-1 characters in the next >>
  is >> buffer;   // read whitespace-terminated word
  // add zero after the last character read into buffer
  return is;
}

int main()
{
  constexpr int max = 128;
  for (char s[max]; read_word(cin, s, max);) {
    cout << s << " is";
    if (!is_palindrome(&s[0], &s[strlen(s)-1])) cout << " not";
    cout << " a palindrome\n";
  }
}
