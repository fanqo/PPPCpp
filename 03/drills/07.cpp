// read and write the name you want to write to
#include "../../std_lib_facilities.h"
int main()
{
  cout << "Enter the name of the person you want to write to\n";
  string name;
  cin >> name;
  cout << "Dear " << name << ",\n";
  cout << "  How are you? I am fine. I miss you.\n";

  cout << "Enter another friend name\n";
  string friend_name;
  cin >> friend_name;
  cout << "  Have you seen " << friend_name << " lately?\n";

  char friend_sex {0};
  cout << "Enter m if " << friend_name << " is male "
       << "and f if " << friend_name << " is female\n";
  cin >> friend_sex;
  if (friend_sex == 'm')
    cout << "  If you see " << friend_name << " please ask him to call me.\n";
  if (friend_sex == 'f')
    cout << "  If you see " << friend_name << " please ask her to call me.\n";

  cout << "Enter the age of " << name << '\n';
  int age;
  cin >> age;
  cout << "  I hear you just had a birthday and you are " << age
       << " years old.\n";
  if (age >= 110) simple_error("you're kidding!");
  if (age <= 0) simple_error("you're kidding!");

  if (age < 12) cout << "  Next year you will be " << age+1 << ".\n";
  if (age == 17) cout << "  Next year you will be able to vote.\n";
  if (age > 70) cout << "  I hope you are enjoying retirement.\n";

  cout << "  Your sincerely\n\n\n";
  cout << "  MYNAME\n";
  return 0;
}
