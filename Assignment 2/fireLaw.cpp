// Regina Imhoff
// Ecampus CS 161
// Assignment #2 

#include <iostream> // includes and statements section

using std::cin; // user input
using std::cout; // machine output
using std::endl; // for line breaks 

int main () {
   // explain what kind of value we're inputting
   int inputPeople; // variable created for user input of number of people
   
   cout << "Let's see if your meeting is in violation of the fire law." << endl;
   cout << "How many people will be in the meeting? " << endl;
   cin >> inputPeople;
   
   int inputFireLaw;  // variable for user input of fire law number
   
   cout << "What is the maximum number of people allowed in this room per the Fire Marshall? ";
   cin >> inputFireLaw;
   
   if(inputPeople == inputFireLaw)
   {
      cout << "You are at the maximum number of people for this room!" << endl;
      cout << "The maximum number of people is " << inputFireLaw << endl;
   }
   else if(inputPeople > inputFireLaw)
   {
      cout << "You have too many people for this room.  You are in violation of the fire law!" << endl;
      cout << "You have " << (inputPeople - inputFireLaw) << " too many people." << endl;
   }
   else if(inputPeople < inputFireLaw)
   {
      cout << "You have plenty of room!" << endl;
      cout << "The maximum number of people is " << inputFireLaw << endl;
      
   }
   
   return 0;
}