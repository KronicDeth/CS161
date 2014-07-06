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
  
  int candybars = 0;
  
  const int COUPONS_PER_CANDYBAR = 10;
  int coupons_spent_on_candybars = 0;
  for ( ; (coupons - coupons_spent_on_candybars) >= COUPONS_PER_CANDYBAR ; coupons_spent_on_candybars += COUPONS_PER_CANDYBAR) {
  	candybars++;
  }
  
  cout << "You have " << candybars << " candybars!" << endl;
  
  int gumballs = 0;
  
  const int COUPONS_PER_GUMBALLS = 3;
  int coupons_spent_on_gumballs = 0;
  int leftover_coupons = (coupons - coupons_spent_on_candybars);
  for ( ; (leftover_coupons - coupons_spent_on_gumballs) >= COUPONS_PER_GUMBALLS ; coupons_spent_on_gumballs += COUPONS_PER_GUMBALLS) {
  	gumballs++;
  }
  
  cout << "You have " << gumballs << " gumballs!" << endl;
  
  int remainder_coupons = (coupons - coupons_spent_on_candybars - coupons_spent_on_gumballs);
  
  cout << "You have " << remainder_coupons << " coupons remaining!" << endl;
  
  return 0;
}