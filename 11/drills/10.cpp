#include "../../std_lib_facilities.h"

struct contact_table{
  string last_name;
  string first_name;
  string tel_number;
  string email;
};

int main()
{
  contact_table mine {"F", "Q", "12345678901", "email@server"};
  cout << setw(3) << mine.last_name
       << setw(3) << mine.first_name
       << setw(13) << mine.tel_number
       << setw(15) << mine.email << endl;
}