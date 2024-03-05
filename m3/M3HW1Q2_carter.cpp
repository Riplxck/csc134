/*
CSC 134 
M3HW1- Bronze
L carter
3/4/24
*/

#include <iostream>
#include <cstdlib>   // for rand ()
#include <ctime>    // for time ()
using namespace std;

int main () {
    // declare variables
    int roll, num1, num2;
    int seed;
    int point;
string choice;
double answer2;
double answer1 = num1 + num2;
// cout << "Enter your lucky number: " << endl;
//cin >> seed;
seed = time(0); // close enough to truly random
// set the random seed
srand (seed);
// roll the dice
num1 = (rand() % 6) + 1; // roll 0-5, add 1
num2 = (rand() % 6) + 1;
roll = num1 + num2;
cout << "Your numbers is: " << num1 << " and " << num2 << " -> " << choice << endl;
cout << "What is the correct answer" << endl;
cin >> answer2;
// TODO: check for correct, incorrect, or other

cout << "Correct!" << endl;
   return 0;
}