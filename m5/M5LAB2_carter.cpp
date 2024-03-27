/*
CSC 134 
M5LAB2- Area of rectangle
L carter
3/27/24
*/

// M5LAB2
// Header goes here

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
double getLength();
double getWidth ();
void displayData (double length, double width, double area);

// the getLength,
// getwidth, , and displayData
// functions here.
double calcarea(double lenght, double width );

int main() {
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length;    // The rectangle's length
       double Width;     // The rectangle's width
        double area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   Width = getWidth();
   
   // Get the rectangle's area.
   area = calcarea(length, Width);
   
   // Display the rectangle's data.
   displayData(length, Width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************
double calcarea(double length, double width ){
        // area is lenght times width
        double area = length * width;
        return area;

}
double getLength() {
    double length;
cout << "What is the length? " << endl;
cin >> length;
return length;
}

double getWidth () {
double width;
    cout << "What is the width? " << endl;
    cin >> width;
    return width;
}
 
 void displayData (double length, double width, double area) {

    cout << "The length is " << length << endl;
    cout << "The width is " << width << endl;
    cout << "The area is " << area << endl;
 }
