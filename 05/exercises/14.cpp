// day-of-the-week, value pairs
#include "../../std_lib_facilities.h"

void v_name_value(string, vector<double>); // take a string and a vector as arguments, and print out the string and vector

int main()
{
  string day = " ";
  double value = 0;
  cout << "Please enter day-of-the-week value pairs (e.g. Tuesday 23): \n";

  vector<double> v0;		// vector for Sunday
  vector<double> v1;		// vector for Monday
  vector<double> v2;		// vector for Tuesday
  vector<double> v3;		// vector for Wednesday
  vector<double> v4; 		// vector for Thursday
  vector<double> v5;		// vector for Friday
  vector<double> v6;		// vector for Saturday
  for(;cin >> day >> value;) {
    if (day == "Sunday" || day == "Sun")
      v0.push_back(value);
    else if (day == "Monday" || day == "Mon")
      v1.push_back(value);
    else if (day == "Tuesday" || day == "Tue")
      v2.push_back(value);
    else if (day == "Wednesday" || day == "Wed")
      v3.push_back(value);
    else if (day == "Thursday" || day == "Thu")
      v4.push_back(value);
    else if (day == "Friday" || day == "Fri")
      v5.push_back(value);
    else if (day == "Saturday" || day == "Sat")
      v6.push_back(value);
    else
      cout << "Unknown day name: " << day << '\n';
  }
  v_name_value("Sunday", v0);
  v_name_value("Monday", v1);
  v_name_value("Tuesday", v2);
  v_name_value("Wednesday", v3);
  v_name_value("Thursday", v4);
  v_name_value("Friday", v5);
  v_name_value("Saturday", v6);
  
  return 0; 
}

void v_name_value(string s, vector<double> v) // write out the string and corresponding vector
{
  cout << "The values for " << s << " are: \n";
  int sum = 0;
  for (int i = 0; i < v.size(); ++i) {
    cout << v[i] << ' ';
    sum += v[i];
  }
  cout << '\n' << "\tThe sum of all the values is: "
       << sum << '\n' << '\n';
}
