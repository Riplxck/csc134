/*
CSC 134 
M5HW- Distance traveled, Bronze
L carter
4/6/24
*/

#include <iostream>
using namespace std;

int main() {
    float speed, distances;
    int time;

cout << "What is the speed of the car" << endl;
cin >> speed;

while (speed <=0) {

    cout << "Speed must be greater than zero. enter speed again" << endl;
    cin >> speed;
}

cout << "How many hours did it travel" << endl;
cin >> time;

while (time < 1) {

    cout << "Time must be greater than zero, enter time again" << endl;
    cin >> time;
}

cout << "\nHour\tDistance Traveled\n" << endl;
cout << "---------------------------\n" << endl;

for (int i = 1; i <= time; i++) {

    distances = speed * i;
    cout << i << "\t\t" << distances << endl;
}
    return 0;

}
