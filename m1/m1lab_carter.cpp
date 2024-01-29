/*
CSC 134 
M1LAB- Apple sales
L carter
1/22/24
*/
#include <iostream>
using namespace std;

int main () {
// Apple sales program
// set up variables
string name= "carter";
int num_apples = 100;
double price_per_apple = 0.25;

// calculate price for all the apples
// symbols are: + - * /
double total_price = num_apples * price_per_apple;

// print the output
cout << "Welcome to the " << name << " Apple Farm." << endl;
cout << "We have " << num_apples << " apples." << endl;
cout << "Each one cost $" << price_per_apple << endl;
cout << "For a total cost of $" << total_price << endl;
cout << endl;

    return 0;
}