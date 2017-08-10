#include "../../std_lib_facilities.h"

struct Reading{
  int hour;
  double temperature;
};

istream& operator>>(istream& is, Reading& r){
  return is >> r.hour >> r.temperature;
}

int main()
  try{
    ifstream ift {"raw_temps.txt"};
    if (!ift) error("Cannot open input file 'raw_temps.txt'");
    
    vector<Reading> reads;
    for (Reading r; ift >> r;){
      reads.push_back(r);
    }
    
    double sum = 0.;
    for (Reading r: reads) sum += r.temperature;
    cout << "The average temperature is: " 
         << sum/reads.size() << endl;
    
    vector<double> temps;
    for (int i = 0; i < reads.size(); ++i) {
      temps.push_back(reads[i].temperature);
    }
    sort(temps);
    cout << "The median of temperaturs is: "
         << temps[temps.size()/2] << endl;
         
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