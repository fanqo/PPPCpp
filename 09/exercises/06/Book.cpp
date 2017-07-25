#include "Book.h"
string read_isbn()
{
  string ib;
  cin >> ib;
  
  for(int i = ib.size()-1; i >= 0; --i) {
    cin.putback(ib[i]);
  }

  int n;
  char c;
  for(int i = 0; i < 3; ++i) {
    if(!(cin >> n)) error("ISBN error");
  
    cin >> c;
    if(c != '-') error("ISBN error");
  }
  
  char x;
  cin >> x;
  if(!((x > '0' && x < '9') || (x > 'A' && x < 'z'))) error("ISBN error");
  
  return ib;
}
  
void Book::book_input() 
{
  cout << "Please input book title: " << endl;
  cin >> b_title;

  cout << "Please input book author: " << endl;
  cin >> b_author;

  cout << "Please input book copyright date: " << endl;
  cin >> b_date;

  cout << "Please input book isbn: " << endl;
  b_isbn=read_isbn();

  cout << "Is the book check-out or not? " << endl;
  cin >> b_check_out;
}

Book::Book(string title, string author, string isbn, int date)
  :b_title{title}, b_author{author}, b_isbn{isbn}, b_date{date}
{
}

bool operator==(const Book& a, const Book& b)  
{
  return (a.isbn()==b.isbn());
}

bool operator!=(const Book& a, const Book& b)
{
  return !(a==b);
}

ostream& operator<<(ostream& os, const Book& a)
{
  os << a.title() << endl
     << a.author() << endl
     << a.isbn() << endl;
}
