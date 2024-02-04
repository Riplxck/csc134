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
int number_boxes_ordered;
double COST_PER_SLICE;
double COST_PER_BOX;
int slices_per_pizza;
int how_many_visitors;
double initial_total;
double Delivery_fee = 2.25;
double tax = 1.75;
double final_total;

//calculations
initial_total = COST_PER_BOX * number_boxes_ordered * COST_PER_SLICE * tax;
final_total = initial_total + Delivery_fee;

// print output
cout << "Question 3-" << endl;
cout << "Pizza party" << endl;
cout << endl;
cout << "John:" << " Thanks for calling pizza hut" << " my name is John how can I Help you" << endl;
cout << "Hey john I need to order a few pizzas" << endl;
cout << "John: " "Ok can i have a name? " << endl;
cin >> name;
cout << "John: Hey " << name << " How many boxes of pizzas do you wanna order?" << endl;
cin >> number_boxes_ordered;
cout << "John: How many slices per box do you want?" << endl;
cin >> slices_per_pizza;
cout << "John: How many visitors are coming?" << endl;
cin >> how_many_visitors;
cout << "John: Ok there will be " << number_boxes_ordered << " boxes of pizzas" << endl;
cout << "with " << slices_per_pizza << " slices per box" << endl;
cout << 
return 0;
}