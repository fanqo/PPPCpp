#include "../../../std_lib_facilities.h"
class Book {
 public:
  string title() { return b_title; }
  string author() { return b_author; }
  string isbn() { return b_isbn; }
  int date() { return b_date; }
  bool check_out() { return b_check_out; }
  
  void book_input();

 private:
  string b_title;
  string b_author;
  string b_isbn;
  int b_date;
  bool b_check_out;
};

