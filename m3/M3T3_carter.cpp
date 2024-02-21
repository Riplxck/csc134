/*
CSC 134
M3T3- RNG
L Carter
2/21/24
*/
#include <iostream>
#include <cstdlib>   // for rand ()
#include <ctime>    // for time ()
using namespace std;

int main () {
    // declare variables
    int roll, die1, die2;
    int seed;
    int point;

cout << "Welcome to the craps table" << endl;
// cout << "Enter your lucky number: " << endl;
//cin >> seed;
seed = time(0); // close enough to truly random
// set the random seed
srand (seed);
// roll the dice
die1 = (rand() % 6) + 1; // roll 0-5, add 1
die2 = (rand() % 6) + 1;
roll = die1 + die2;
cout << "Your 🎲 roll is: " << die1 << " and " << die2 << " -> " << roll << endl;

// TODO: check for win, loss, or point


if (roll==7|| roll==11) {
    cout << "You Win!" << endl;
}
else if (roll==2||roll==3||roll==12) {
    cout << "You lose..." << endl;
}
else {
    cout << "Your point is " << roll << endl;
    point = roll;
    do {
        die1 = (rand() % 6) + 1; // roll 0-5, add 1
        die2 = (rand() % 6) + 1;
        roll = die1 + die2;
        cout << "Your 🎲 roll is: " << die1 << " and " << die2 << " -> " << roll << endl;
        } while(roll!=point&& roll!=7);
        if (roll==point) {
            cout << "You win" << endl;
        }
        if (roll==7) {
            cout << "You lose..." << endl;
        }
    }
    return 0;
}