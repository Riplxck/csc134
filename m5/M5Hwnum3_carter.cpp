/*
CSC 134 
M5HW- Distance traveled, Bronze
L carter
4/6/24
*/

#include <iostream>
using namespace std;

int main() {

const int NUM_MONTHS = 3;
string month_1;
    string month_2;
    string month_3;

    float rainfall_month_1,
        rainfall_month_2,
        rainfall_month_3,
        total,
        average;

        cout << "-------------------------" << endl;
        cout << "\nThis program should calculate the average for three months" << endl;
        cout << "--------------------------" << endl;
        cout << "\n\nPress Enter to continue" << endl;
        cin.get();

        cout << "Enter the name of month 1" << endl;
        cin >> month_1;
        cout << "How many inches of rain fell for " << month_1 << endl;
        cin >> rainfall_month_1;
        cout << "Enter the name of month 2" << endl;
        cin >> month_2;
        cout << "How many inches of rain fell for " << month_1 << endl;
        cin >> rainfall_month_2;
        cout << "Enter the name of month 3" << endl;
        cin >> month_3;
        cout << "How many inches of rain fell for " << month_1 << endl;
        cin >> rainfall_month_3;

        total = rainfall_month_1 + rainfall_month_2 + rainfall_month_3;

        average = total / NUM_MONTHS;

        cout << "\nThe average rainfall for ";
        cout << month_1 << ", " << month_2 << ", " << "and ";
        cout << month_3 << " is ";
        cout << average << " inches. \n" << endl;






    return 0;

}