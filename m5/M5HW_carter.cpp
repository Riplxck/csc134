/*
CSC 134 
M5HW- geometry calculator 
L carter
4/6/24
*/

// M5HW
// Header goes here

#include <iostream>
#include <cmath>
using namespace std;

void main_menu();
void choice_circle();
void choice_rectangle();
void choice_triangle();
// TODO: add more choices here
int main() {
cout << "M5HW - Geometry calculator" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}
void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You have a Geometry calculator " << endl;
  cout << "Do you:" << endl;
  cout << "1. calculate the area of a circle" << endl;
  cout << "2. calculate the area of rectangle" << endl;
  cout << "3. calculate the area of a triangle" << endl;
  cout << "4. [Quit]" << endl;

  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_circle();
  } else if (2 == choice) {
    choice_rectangle();
  } else if (3 == choice) {
    choice_triangle();
  } else if (4 == choice) {
cout << "Ok, quitting" << endl;
return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}
void choice_circle() {
  float radius, area;
cout << "Enter the radius of the circle" << endl;
cin >> radius;

area = M_PI * radius * radius;
cout << " The Area of the circle is: " << area << endl;

}

void choice_rectangle(){
  float length, width, area;
  cout << "Enter the length of the rectangle" << endl;
  cin >> length;
  cout << "Enter the width of the rectangle" << endl;
  cin >> width;
  area = length * width;
  cout << "The Area of the rectangle is " << area << endl;
}

void choice_triangle(){
float base, height, area;
cout << "Enter the base of the triangle " << endl;
cin >> base;
cout << "Enter the height of the triangle " << endl;
cin >> height;
area = base * height * 0.5;
cout << "the area of the triangle is: " << area << endl;
}
