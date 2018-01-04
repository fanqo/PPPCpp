#include <iostream>

void to_lower(char* s)
{
  for(char* c = s; *c != '\0'; ++c){
    if (*c > 'A' && *c < 'Z')
      *c += 32;
  }
}

int main()
{
  char* s = new char[14] {"Hello, World!"};
  to_lower(s);

  for(; *s != '\0'; ++s){
    std::cout << *s;
  }
  std::cout << '\n';
}
