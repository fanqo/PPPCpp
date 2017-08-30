#include "../../std_lib_facilities.h"

void char_class (char& c){
  cout << "Char " << c << " is:";
  if (isspace(c)) cout << " 'whitespace'";
//  if (isalpha(c)) cout << " 'letter'"
  if (isdigit(c)) cout << " 'decimal digit'";
  if (isxdigit(c)) cout << " 'hexadecimal digit'";
  if (islower(c)) cout << " 'lowercase letter'";
  if (isupper(c)) cout << " 'uppercase letter'";
  if (isalnum(c)) cout << " 'alnum'";
  if (iscntrl(c)) cout << " 'control character'";
  if (ispunct(c)) cout << " 'punct'";
  if (isprint(c)) cout << " 'printable'";
  if (isgraph(c)) cout << " 'not space'";
  cout << endl;
}

void string_to_char(string s){
  istringstream ist {s};
  for (char c; ist >> c;){
    char_class(c);
  }
  cout << endl;
}

int main() 
{
  for (string s; cin >> s;){
    cout << "The string is: " << s << endl;
    string_to_char(s);
  }
  return 0;
}