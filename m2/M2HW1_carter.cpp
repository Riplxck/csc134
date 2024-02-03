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
//ask user for name
// ask user starting account balance
// ask user amount of deposit
// ask user amount of withdrawal
// final account balance
cout << "M2HW1- Grading tier questions " << endl;
cout << "Question 1 " << endl;
cout << endl;
string user_name;
string answer = "yes";
double starting_accout_balance;
double amount_of_deposit;
double amount_of_withdrawal;
double total_balance = starting_accout_balance + amount_of_deposit;
double final_balance = total_balance - amount_of_withdrawal;

// do calculations
final_balance = total_balance - amount_of_withdrawal;
cout << "Hello welcome to Federal bank " << endl;
cout << "What's your name?" << endl;
cin >> user_name;
cout << "What is your starting account balance?" << endl;
cin >> starting_accout_balance;
cout << "What's your amount of deposit?" << endl;
cin >> amount_of_deposit;
cout << "Your total balance currently is: " << endl;
cin >> total_balance;
cout << "Would you like to make a withdrawal" << endl;
cin >> answer;
cout << "What is your amount of withdrawal" << endl;
cin >> amount_of_withdrawal;
cout << endl;
cout << "Federal bank" << endl;
cout << "2/3/24" << " 01:01 PM " << "\tCard #_5000" << endl;
cout << "ATM IL0366" << endl;
cout << "-------------------------------" << endl;
cout << "\t\t sequence# 2199" << endl;
cout << "Balance Inquiry" << "\t\t" << user_name << endl;
cout << " chk acc #_2050" << endl;
cout << "starting amount: " << "\t\t" << "$" << starting_accout_balance << endl;
cout << "amount deposited: " << "\t\t" << "$" << amount_of_deposit << endl;
cout << "withdrawal amount: " << "\t\t" << "$" << amount_of_withdrawal << endl;
cout << "final balance: " << "\t\t\t" << "$" << total_balance - amount_of_withdrawal << endl;
cout << endl;




 return 0;
}    