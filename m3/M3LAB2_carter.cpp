/*
CSC 134
M3LAB2-
L Carter
2/26/24
*/
#include <iostream>
#include <cstdlib>   // for rand ()
#include <ctime>    // for time ()
using namespace std;

int main() {
//declare variables
string Letter_grade;
int number_grade;
int A = 90;
int B = 80;
int C = 70;
int D = 60;
int F = 0;

// Ask for number grade
cout << "Enter you number grade" << endl;
cin >> number_grade;
if(number_grade >= A) {
cout << "Congratulations you received a A, nice work" << endl;
}
if(number_grade >= B && number_grade < A){
    cout << "Congratulations you received a B" << endl;
}
if(number_grade >= C && number_grade < B) {
    cout << "You received a C, step it up" << endl;
}
if(number_grade >= D && number_grade < C) {
cout << "You received a D, DO BETTER!" << endl;
}
if(number_grade >= F && number_grade < D) {
    cout << "You received a F, YOU NEED TUTORING!" << endl;
}
return 0;
}
