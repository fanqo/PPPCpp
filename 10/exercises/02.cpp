#include "../../std_lib_facilities.h"

struct Reading{
  int hour;
  double temperature;
};

ostream& operator<<(ostream& os, Reading& r)
{
  return os << r.hour << " " << r.temperature;  
}

int main()
  try{
    vector<Reading> temps;
    for (int i=0; i < 52; ++i){
      temps.push_back(Reading {rand() % 24, double(rand() % 200)/10 + 40});
    }
   
    ofstream ost {"raw_temps.txt"};
    if (!ost) error("Cannot open output file");
    for (int i = 0; i < temps.size(); ++i){
      ost << temps[i] << endl;
    }
    
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