/*
CSC 134 
M2T2- Apple sales program 
L carter
1/29/24
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    cout << fixed << setprecision (2); // only show 2 decimal places
    // set up variables 
    string name;
    int num_apples;
    double price_per_apple;
    double total;
    // ask user for name 
     cout << "M2T2" << endl;
    cout << " Hi, what's your name? " << endl;
    cin >> name;
    cout << "Nice to meet you, " << name << endl;
    // ask how many apples?
    cout << "How many apples would you like? ";
    cin >> num_apples;
    // ask price per apple
    cout << "How much are they each? ";
    cin >> price_per_apple;

    // calculate total price
    total = num_apples * price_per_apple;

    // print output
    // TODO: make a nice receipt
    cout << endl;
    cout << "Thank you for purchasing " <<  num_apples << " apples." << endl;
cout << " store #600 Tel #24" << endl;
cout << "Jan 29 (monday) 1:54" << endl;
cout << "QTY item" << endl;


cout << num_apples  << " apples" << "\t" << "$" << total << endl;
cout << "--------------------------" << endl;
cout << "Total" << "\t \t$" << total << endl;

    return 0;
}