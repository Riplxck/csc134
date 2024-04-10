#include <iostream>
using namespace std;
/*
CSC 134 
M6LAB1- buckshot
L carter
4/10/24
handle loading and looking at a shotgun magazine
max 6 shells, they are live, blanks, or empty.
*/

const int MAX_SHELLS = 6;
const int EMPTY = 0;
const int BLANK = 1;
const int LIVE = 2;
 // array is global variable (all functions can see it )
 int magazine[MAX_SHELLS] = {LIVE, BLANK , EMPTY, LIVE, BLANK , EMPTY} ;

// function prototypes
// get the name of a shell
string shell_name(int shell);

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

string shell_name(int shell) {
// input: number of shell
// output: name ("empty", "blank", "live")
string name;
if(shell ==EMPTY) {
name = "EMPTY";

}
if (shell == BLANK) {
name = "BLANK";

}
if (shell == LIVE) {

name = "LIVE";


}
return name;
}