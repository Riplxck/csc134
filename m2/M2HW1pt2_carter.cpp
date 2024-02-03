/*
CSC 134 
M2HW1- silver
L carter
2/3/24
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main () {
// improvements: set all amounts 2 decimal places
cout << fixed << setprecision(2);
//set variables
double lenght; 
double width;
double height;
double volume;
const double COST_PER_CUBIC_FOOT = 0.3;
const double CHARGE_PER_CUBIC_FOOT = 0.52;

// get input
cout << "Question 2-" << endl;
cout << "General Crates" << endl;
cout << endl;

cout << "What is the lenght of the crate" << endl;
cin >> lenght;
cout << "What is the width of the crate" << endl;
cin >> width;
cout << "What is the height of the crate" << endl;
cin >> height;

//do calculations
volume = lenght * width * height;

// print output
cout << "The volume of the crate is: " << volume << endl;
cout << "The cost per cubic foot is: " << COST_PER_CUBIC_FOOT << endl;
cout << "The charge per cubic foot is: " << CHARGE_PER_CUBIC_FOOT << endl;
// part 2: calculate the cost of the crate
// calculate price to make it
 cout << "Total cost: " << "$" << volume * COST_PER_CUBIC_FOOT << endl;
cout << "profit: " << "$" << CHARGE_PER_CUBIC_FOOT - COST_PER_CUBIC_FOOT << endl;

return 0;
}