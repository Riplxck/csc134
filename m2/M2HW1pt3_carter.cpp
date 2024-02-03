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
// set variables
string name;
double boxes_ordered;
double COST_PER_SLICE = 0.23;
double COST_PER_BOX = 2;
double slices_per_pizza = 8;
double how_many_visitors = 12;
double total;
double tax = 1.70;

//calculations
total = COST_PER_BOX * slices_per_pizza * COST_PER_SLICE * tax;

// print output
cout << "Question 3-" << endl;
cout << "Pizza party" << endl;
cout << endl;
cout << "John:" << " Thanks for calling pizza hut" << " my name is John how can I Help you" << endl;
cout << "Hey john I need to order a few pizzas" << endl;
cout << "John: " "Ok can i have a name? " << endl;
cin >> name;
cout << "John: Ok " << name << " How many pizzas do you wanna order?" << endl;
cin >> boxes_ordered;
cout << "John: How many slices per pizzas do you want?" << endl;
cin >> slices_per_pizza;
cout << "John: How many visitors are coming?" << endl;
cin >> how_many_visitors;
cout << "John: Ok your total is: " << "$" << total << endl;  

return 0;
}