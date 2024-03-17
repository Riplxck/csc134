/*
CSC 134 
M4HW1-silver1
L carter
3/17/24
*/

#include <iostream>
using namespace std;

int main() {
    // declare variables
    int firstNum, secondNum, answer;
    //firstNum = 0;
    firstNum = 5;
     secondNum = 1;
    // answer = firstNum * secondNum;
    //cout << "What is your first number" << endl;
    // cin >> firstNum;
for(int i=1; i<= 12; i++) {
    answer = firstNum * i;
    cout << firstNum << " times " << i << " is " << answer << endl;
}


    return 0;
}