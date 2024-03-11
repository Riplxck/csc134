/*
CSC 134 
M4T1-2
L carter
3/11/24
*/

#include <iostream>
using namespace std;

int main() {
const int MIN_NUMBER = 1, // starting number to square
            MAX_NUMBER = 10; // maximum number to square
int num = MIN_NUMBER; // counter
cout << "Number Number squared" << endl;
cout << "--------------------------------" << endl;
while(num <= MAX_NUMBER) {
    cout << num << "\t\t" << (num * num) << endl;
    num++; // Increment the counter.
}          
    return 0;
}