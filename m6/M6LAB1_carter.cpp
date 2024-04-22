#include <iostream>
using namespace std;
#include "m6lab1_util.h"
/*
CSC 134 
M6LAB1- buckshot
L carter
4/10/24
handle loading and looking at a shotgun magazine
max 6 shells, they are live, blanks, or empty.
*/


 // array is global variable (all functions can see it )
 int magazine[MAX_SHELLS] = {LIVE, BLANK , EMPTY, LIVE, BLANK , EMPTY} ;

// function prototypes
// get the name of a shell


int main (){

    cout << "M6LAB1" << endl;

    cout << "the Magazine holds:" << endl;
// loop through the magazine
for(int i=0; i < MAX_SHELLS; i++) {
int shell = magazine[i]; // get current shell
string name = shell_name(shell);
cout << name << ", ";
}
cout << endl;

// 2nd option: Range-based for loop
for (int shell: magazine) {
    cout << shell_name(shell) << ", ";
}

}
// utility function

