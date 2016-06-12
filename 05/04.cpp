// test uncaught exception
#include "../std_lib_facilities.h"
int main()
  try{
    error("Just a test!");
    error("Uncaught error.");
    return 0;
  }
  catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
  }
  catch (...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
  }
