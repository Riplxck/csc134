 /*
CSC 134 
M3LAB1- 
L carter
2/14/24
*/

#include <iostream>
using namespace std;

// beginning of the main() method
int main() {

  cout << "Hello World!" << endl; // this is as simple as a program gets

// lets computer know that we finished without errors
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  string  choice;

  // ask the question
  cout << "Do you choose mission success or mission faiure?" << endl;
  cout << "Type success or failure: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if ("success" == choice) {
  	cout << "You chose mission success" << endl;
    cout << "Ghost:" " Confirmed, mission success is ensured. Stay frosty out there." << endl;
  }
  else if ("failure" == choice) {
  	cout << "You chose mission failure" << endl;
    cout << "Ghost:" " thats not an option, Mission failed you'll get em' next time." << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method
