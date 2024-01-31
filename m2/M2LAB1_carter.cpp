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
    cout << "Part 1 - Area of a Rectangle" << endl;
//declare variables
double lenght; 
double width;
// double heigth; // for later
double area;
// get input
cout << "What is the lenght of the rectangle? ";
cin >> lenght;
cout << "What is the width of the rectangle? ";
cin >> width;

// do calculations
area = lenght* width;

// print output
cout << "The area of the rectangle is: " << area << endl;

}
