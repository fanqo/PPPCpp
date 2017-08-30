#include "../std_lib_facilities.h"
// output birth year and age in 
// decimal, hexadecimal, and octal form

int main()
  try{
    int current_year = 2017;
    int birth_year = 1986;

    cout << "My birth year is: \t" << birth_year 
	 << "\t" << hex << birth_year << "(hex)"
	 << "\t" << oct << birth_year << "(oct)"
	 << endl;

    int age = current_year - birth_year;
    cout << "My age is: \t" << dec << age
	 << "\t" << hex << age << "(hex)"
	 << "\t" << oct << age << "(oct)"
	 << endl;

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
