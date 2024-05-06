#include <iostream>
using namespace std;
#include "Rectangle.h"

// CSC 134
// M7T2 - Rectangles
//carterl
// 5/1/24

int main() {

cout << "M7T2" << endl;
// make a rectangle
Rectangle r;
// ask user for size
double length, width, area;
string text;
cout << "Enter length: ";
cin >> length;
cout << "Enter width: ";
cin >> width;
cout << "Enter character or emoji: ";
cin >> text;
// set up the rectangle
r.setWidth(width);
r.setLength(length);
r.setChar(text);
cout << "rectangle is:" << endl;
cout << r.getLength() << " by " << r.getWidth() << endl;
cout << "Rectangle area = " << r.getArea() << endl;
cout << "Printing the rectangle" << endl;
r.drawRectangle();


return 0;

}