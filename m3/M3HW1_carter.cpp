/*
CSC 134 
M3HW1- silver
L carter
3/4/24
*/

#include <iostream>
using namespace std;

int main() {
cout << "Question 1" << endl;
// write a simple chat bot
// set variables
string  choice;

  // ask the question
  cout << "Do you choose sportbook 1 or sportbook 2?" << endl;
  cout << "Type book 1 or book 2: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if ("1" == choice) {
  	cout << "You chose sportbook 1" << endl;
    cout << "this book comes with sleeper and fanduel" << endl;
  }

  else if ("2" == choice) {
  	cout << "You chose sportbook 2" << endl;
    cout << "this book comes with prizepicks and draftkings" << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

return 0;
}