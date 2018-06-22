#include <iostream>
#include <regex>
#include <tr1/regex>

int main()
{
  std::regex sr {R"(sr)"};
  std::tr1::regex tr {R"(tr)"};

  std::cout << "std :: regex and tr1::regex exist" << '\n';
}
