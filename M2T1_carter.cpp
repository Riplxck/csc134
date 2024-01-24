/*
CSC 134 
M2T2- Receipt Calculator
L carter
1/24/24
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    // print receipt for a restaurant
    // the price before tax
    // the amount of tax owed (8%)
    // the total includng tax
    cout << fixed << setprecision (2); // only show 2 decimal places
cout << "M2T2" << endl;
// set up variables
string meal_name = "pineapple surf";
double meal_price = 5.99;
double tax_percent = 0.08;
double tax_amount = 0;
double total_price = 6.47;

//calculate the tax amount and the total price
tax_amount = meal_price * tax_percent;

// print receipt 
cout << "Thank you for purchasing a smoothie" << endl;
cout  << endl;
cout << meal_name <<  "\t" << "$" << meal_price << endl;
cout << "Tax (8%)" << "\t" << "$" <<tax_amount << endl;
cout << "---------------------" << endl;
cout << "total" << "\t\t" << "$" << total_price << endl;
cout << endl;
return 0;
}