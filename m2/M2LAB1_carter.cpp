/*
CSC 134 
M1lab- 
L carter
1/31/24
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    cout << "M2T1 - box dimensions " << endl;
//declare variables
double lenght; 
double width;
double height;
double volume;
// constants dont chnage during the run
 const double COST_PER_CUBIC_FOOT = 0.23;
 const double CHANGE_PER_CUBIC_FOOT = 0.5;

//  Calculate 3d box (rectangular prism)
// get input
cout << "Input box dimensions." << endl;
cout << "What is the lenght of the rectangle? ";
cin >> lenght;
cout << "What is the width of the rectangle? ";
cin >> width;
cout << "What is the height? ";
cin >> height;

// do calculations
volume = lenght * width * height;

// print output
cout << "The volume of the rectangle is: " << volume << endl;

// part 2: calculate the cost of the box
// calculate price to make it 

cout << "cost " << volume * COST_PER_CUBIC_FOOT << endl;

return 0;
}
