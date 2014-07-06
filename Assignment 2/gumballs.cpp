// Regina Imhoff
// Ecampus CS 161
// Assignment #2 

#include <iostream> // includes and statements section

using std::cin; // user input
using std::cout; // machine output
using std::endl; // for line breaks 

int main () {
  int coupons;
  
  cout << "How many coupons did you win?" << endl;
  cin >> coupons;
  cout << "You entered " << coupons << " coupons." << endl;
  
  int candyBars;
  candyBars = (coupons / 10);
  cout << "You can get " << candyBars << " candy bars!" << endl;

  int remainder;
  remainder = (coupons % 10);
  
  int gumballs;
  gumballs = (remainder / 3);

  int remainderGum;
  remainderGum = (remainder % 3);
  
  cout << "You can get " << gumballs << " gumballs!" << endl;
  cout << "You will have " << remainderGum << " coupons left!" << endl;
  
   return 0;
}