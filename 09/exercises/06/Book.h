#include "../../../std_lib_facilities.h"
class Book {
 public:
  string title() const { return b_title; }
  string author() const { return b_author; }
  string isbn() const { return b_isbn; }
  int date() const { return b_date; }
  bool check_out() { return b_check_out; }
  Book(string, string, string, int);
  Book();
  
  void book_input();

 private:
  string b_title;
  string b_author;
  string b_isbn;
  int b_date;
  bool b_check_out;
};

bool operator==(const Book& a, const Book& b);
bool operator!=(const Book& a, const Book& b);
ostream& operator<<(ostream& os, const Book& a);
