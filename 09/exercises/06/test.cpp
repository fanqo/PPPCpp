#include "Book.h"
int main()
  try {
    Book a {"a_title", "a_author", "1-1-1-a", 2203};
    Book b {"b_title", "b_author", "1-1-1-a", 0012};
    Book c {"c_title", "c_author", "1-1-1-c", 3392};
    
    cout << "It is " << (a==b) << " that book a is the same of book b" << endl;
    cout << "It is " << (a==c) << " that book a is the same of book c" << endl;
    cout << "Book a is: " << endl
         << a;
  }
  catch (exception& e) {
    cerr << "error: " << e.what() << endl;
    return 1;
  }
