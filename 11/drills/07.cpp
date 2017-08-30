#include "../../std_lib_facilities.h"

int main()
  try{
    cout << showbase;
    int birth_year {1986};
    cout << "My birth year is: " << endl
         << "\t" << birth_year << endl
         << "\t" << hex << birth_year << " (hex)" << endl
         << "\t" << oct << birth_year << " (oct)" << endl;
         
    int my_age {31};
    cout << "My age is: " << endl
         << "\t" << dec << my_age << endl
         << "\t" << hex << my_age << " (hex)" << endl
         << "\t" << oct << my_age << " (oct)" << endl;
    return 0;
  }
  
  catch (exception& e){
    cerr << "Error: " << e.what() << endl;
    return 1;
  }
  
  catch (...){
    cerr << "Unknown error" << endl;
    return 2;
  }