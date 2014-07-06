// Regina Imhoff
// Ecampus CS 161 
// Assignment #1 Echo.cpp
//       
#include <iostream> // includes and statements section
         
using std::cin; // user input
using std::cout; // machine output
using std::endl; // for line breaks 
      
int main() {
   int inputNumber; // variable created for user input
    
   cout << "Pick a number, any number: ";  // what is put on user's screen 
   cin >> inputNumber; // what user inputs

   cout << "Congratulations!  You entered: " << inputNumber << endl; // again showed on user's screen, followed by what they entered
    
  return 0; // no errors 
}   
