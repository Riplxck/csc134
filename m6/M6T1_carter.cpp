#include <iostream>
using namespace std;
/*
CSC 134 
M5HW- geometry calculator 
L carter
4/8/24


#include <iostream>
using namespace std;

// M6T1 - Basic Arrays 
// For each day Monday through Friday:
 // count the cars that pass the site
  // add them to the total
// Find the total
// Find the average per day

*/
// function prototypes
void part1();
void part2();

int main () {

cout << "M6T1" << endl;
 part1();
part2 ();
return 0;
}

// function definitions
void part1() {
cout << "Part 1" << endl;
const int size = 5; // because five day
int cars;
int total= 0;
double average;
// find out how many cars spotted per day
cout << "Enter the number of cars seen." << endl;
for (int i=0; i < size; i++) {
    cout << "Day " << i+1 << ": " << endl;
    cin >> cars;
    // add to the total
    total = total + cars;
}
// find total and average
average = (double)total / size;
cout << "Total cars: " << total << endl;
cout << "Average per day: " << average << endl;
}

void part2() {
    cout << "Part 2" << endl;
    const int size = 5;
    int total = 0;
    double average;
    // array to hold the car data
    int cars [size] = {0}; // size is explicit
    // array to hold the days
    string days[] = {"mon", "Tue" , "Wed", "Thu", "Fri"};

    // get data for each day
    cout << "Enter the cars seen for each day" << endl;
    for (int i=0; i < size; i++) {
        cout << days[i] << ": " << endl;
        cin >> cars[i];
    }
    // find total and average
    for (int i=0; i < size; i++) {
        total += cars [i];
    }
    average = (double) total / size;
    cout << "Total = " << total << ", average = " << average << endl;

    // finally plot the data
    for (int i=0; i < size; i++) {
        cout << days[i] << "\t" << endl;
        cout << cars [i] << "\t" << endl;
        for (int j=0; j < cars [i]; j++) {
            cout << "|" << endl;
        }
    }
}
  

  





    