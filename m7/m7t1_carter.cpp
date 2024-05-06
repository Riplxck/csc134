#include <iostream>
using namespace std;
#include "Restaurant.h"
// CSC 134
// M7T1 - Restaurant Reviews
//carterl
// 4/29/24

int main () {

cout << "Restaurant Review program" << endl;
// make a new Restaurant object
cout << "Breakfast" << endl;
Restaurant breakfast = Restaurant("Waffle House", 3.0);
Restaurant lunch = Restaurant("Chickfila", 4.0);
cout << breakfast.getName() << endl;
cout << breakfast.getRating() << endl;
return 0;
}