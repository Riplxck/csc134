/*
CSC 134 
M3T1- Rectangles
L carter
2/12/24
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    // Declare variables
 int lenght1, width1, lenght2, width2;
 int area1, area2;
 // Ask the user for the width and lenght of the two rectangles
 cout << "Enter lenght and width of the first rectangle, seperated by a space." << endl;
 cin >> lenght1;
 cin >> width1;
 cout << "Enter lenght and width of the second rectangle, seperated by a space." << endl;
 cin >> lenght2;
 cin >> width2;


// Calculate the areas
 area1 = lenght1 * width1;
 area2 = lenght2 * width2;
 // Print the areas
 cout << "The first area is: " << area1 << endl;
 cout << "The second area is: " << area2 << endl;

 // Tell them which one has a larger area
 if (area1 > area2) {
    cout << "The first rectangle is larger." << endl;
}
if (area1 < area2) {
cout << "The second rectangle is larger." << endl;
}
else if (area1 == area2) {
    cout << "They are the same size. " << endl;
}
 return 0;
}