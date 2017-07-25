#include "Book.h"
int main()
  try {
    Book a;
    a.book_input();
    
    cout << a.title() << ", " << a.isbn() << endl;
  }
  catch (exception& e) {
    cerr << "error: " << e.what() << endl;
    return 1;
  }
